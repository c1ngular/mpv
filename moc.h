

#pragma once

#ifndef GO_MOC_38f408_H
#define GO_MOC_38f408_H

#include <stdint.h>

#ifdef __cplusplus
class stub38f408;
void stub38f408_stub38f408_QRegisterMetaTypes();
extern "C" {
#endif

struct Moc_PackedString { char* data; long long len; void* ptr; };
struct Moc_PackedList { void* data; long long len; };
int stub38f408_stub38f408_QRegisterMetaType();
int stub38f408_stub38f408_QRegisterMetaType2(char* typeName);
int stub38f408_stub38f408_QmlRegisterType();
int stub38f408_stub38f408_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
int stub38f408_stub38f408_QmlRegisterUncreatableType(char* uri, int versionMajor, int versionMinor, char* qmlName, struct Moc_PackedString message);
void* stub38f408___children_atList(void* ptr, int i);
void stub38f408___children_setList(void* ptr, void* i);
void* stub38f408___children_newList(void* ptr);
void* stub38f408___dynamicPropertyNames_atList(void* ptr, int i);
void stub38f408___dynamicPropertyNames_setList(void* ptr, void* i);
void* stub38f408___dynamicPropertyNames_newList(void* ptr);
void* stub38f408___findChildren_atList(void* ptr, int i);
void stub38f408___findChildren_setList(void* ptr, void* i);
void* stub38f408___findChildren_newList(void* ptr);
void* stub38f408___findChildren_atList3(void* ptr, int i);
void stub38f408___findChildren_setList3(void* ptr, void* i);
void* stub38f408___findChildren_newList3(void* ptr);
void* stub38f408_NewStub(void* parent);
void stub38f408_DestroyStub(void* ptr);
void stub38f408_DestroyStubDefault(void* ptr);
void stub38f408_ChildEventDefault(void* ptr, void* event);
void stub38f408_ConnectNotifyDefault(void* ptr, void* sign);
void stub38f408_CustomEventDefault(void* ptr, void* event);
void stub38f408_DeleteLaterDefault(void* ptr);
void stub38f408_DisconnectNotifyDefault(void* ptr, void* sign);
char stub38f408_EventDefault(void* ptr, void* e);
char stub38f408_EventFilterDefault(void* ptr, void* watched, void* event);
;
void stub38f408_TimerEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif