package main

import (
	"os"
	"os/exec"
	"path/filepath"
	"runtime"
	"strconv"
)

func main() {
	if _, ok := os.LookupEnv("QT_DIR"); !ok {
		println("please export QT_DIR")
		os.Exit(1)
	}

	pwd, pwdErr := os.Getwd()
	if pwdErr != nil {
		println("failed to get PWD", pwdErr.Error())
		os.Exit(1)
	}

	if _, err := os.Stat(filepath.Join(pwd, "mpv")); err == nil {
		println("mpv already cloned")
	} else {
		if out, err := exec.Command("git", "clone", "--depth=1", "https://github.com/c1ngular/mpv.git").CombinedOutput(); err != nil {
			println("failed to clone mpv", err.Error())
			println(string(out))
			os.Exit(1)
		}
		println("cloned mpv")
	}

	//patch *.pro to build a static lib
	//exec.Command("sed", "-i", "''", "-e", "s/# CONFIG/CONFIG/g", filepath.Join(pwd, "mpv", "mpv.pro")).CombinedOutput()

	for _, target := range []string{runtime.GOOS, "android", "android_emulator", "ios"} {
		os.MkdirAll(filepath.Join(pwd, "mpv", target), 0755)

		if target == "android" {
			if _, ok := os.LookupEnv("ANDROID_NDK_DIR"); !ok {
				println("please export ANDROID_NDK_DIR")
				os.Exit(1)
			}
		}

		var qmake string
		switch target {
		case "darwin":
			qmake = filepath.Join(os.Getenv("QT_DIR"), "5.13.0", "clang_64", "bin", "qmake")

		case "linux":
			qmake = filepath.Join(os.Getenv("QT_DIR"), "5.13.0", "gcc_64", "bin", "qmake")

		case "android":
			qmake = filepath.Join(os.Getenv("QT_DIR"), "5.13.0", "android_armv7", "bin", "qmake")

		case "android_emulator":
			qmake = filepath.Join(os.Getenv("QT_DIR"), "5.13.0", "android_x86", "bin", "qmake")

		case "ios":
			if runtime.GOOS != "darwin" {
				return
			}
			qmake = filepath.Join(os.Getenv("QT_DIR"), "5.13.0", "ios", "bin", "qmake")
		}

		ndkPATH, ndkOK := os.LookupEnv("ANDROID_NDK_DIR")

		qCmd := exec.Command(qmake, filepath.Join(pwd, "mpv", "mpv.pro"))
		qCmd.Dir = filepath.Join(pwd, "mpv", target)
		if ndkOK {
			qCmd.Env = append(qCmd.Env, "ANDROID_NDK_ROOT="+ndkPATH)
		}
		if out, err := qCmd.CombinedOutput(); err != nil {
			println("failed to generate makefile for", target, err.Error())
			println(string(out))
			os.Exit(1)
		}
		println("generated makefile for", target)

		iCmd := exec.Command("make", "-j", strconv.Itoa(runtime.NumCPU()))
		iCmd.Dir = filepath.Join(pwd, "mpv", target)
		if ndkOK {
			iCmd.Env = append(iCmd.Env, "ANDROID_NDK_ROOT="+ndkPATH)
		}
		if out, err := iCmd.CombinedOutput(); err != nil {
			println("failed to make mpv for", target)
			println(string(out))
			os.Exit(1)
		}
		println("built mpv for", target)
	}
}
