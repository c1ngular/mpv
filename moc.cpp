

#define protected public
#define private public

#include "moc.h"
#include "_cgo_export.h"

#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QGraphicsObject>
#include <QGraphicsWidget>
#include <QLayout>
#include <QMetaMethod>
#include <QObject>
#include <QOffscreenSurface>
#include <QPaintDeviceWindow>
#include <QPdfWriter>
#include <QQuickItem>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <QWindow>

#ifdef QT_QML_LIB
	#include <QQmlEngine>
#endif


class stub38f408: public QObject
{
Q_OBJECT
public:
	stub38f408(QObject *parent = Q_NULLPTR) : QObject(parent) {qRegisterMetaType<quintptr>("quintptr");stub38f408_stub38f408_QRegisterMetaType();stub38f408_stub38f408_QRegisterMetaTypes();callbackstub38f408_Constructor(this);};
	 ~stub38f408() { callbackstub38f408_DestroyStub(this); };
	void childEvent(QChildEvent * event) { callbackstub38f408_ChildEvent(this, event); };
	void connectNotify(const QMetaMethod & sign) { callbackstub38f408_ConnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void customEvent(QEvent * event) { callbackstub38f408_CustomEvent(this, event); };
	void deleteLater() { callbackstub38f408_DeleteLater(this); };
	void Signal_Destroyed(QObject * obj) { callbackstub38f408_Destroyed(this, obj); };
	void disconnectNotify(const QMetaMethod & sign) { callbackstub38f408_DisconnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	bool event(QEvent * e) { return callbackstub38f408_Event(this, e) != 0; };
	bool eventFilter(QObject * watched, QEvent * event) { return callbackstub38f408_EventFilter(this, watched, event) != 0; };
	void Signal_ObjectNameChanged(const QString & objectName) { QByteArray* taa2c4f = new QByteArray(objectName.toUtf8()); Moc_PackedString objectNamePacked = { const_cast<char*>(taa2c4f->prepend("WHITESPACE").constData()+10), taa2c4f->size()-10, taa2c4f };callbackstub38f408_ObjectNameChanged(this, objectNamePacked); };
	void timerEvent(QTimerEvent * event) { callbackstub38f408_TimerEvent(this, event); };
signals:
public slots:
private:
};

Q_DECLARE_METATYPE(stub38f408*)


void stub38f408_stub38f408_QRegisterMetaTypes() {
}

int stub38f408_stub38f408_QRegisterMetaType()
{
	return qRegisterMetaType<stub38f408*>();
}

int stub38f408_stub38f408_QRegisterMetaType2(char* typeName)
{
	return qRegisterMetaType<stub38f408*>(const_cast<const char*>(typeName));
}

int stub38f408_stub38f408_QmlRegisterType()
{
#ifdef QT_QML_LIB
	return qmlRegisterType<stub38f408>();
#else
	return 0;
#endif
}

int stub38f408_stub38f408_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName)
{
#ifdef QT_QML_LIB
	return qmlRegisterType<stub38f408>(const_cast<const char*>(uri), versionMajor, versionMinor, const_cast<const char*>(qmlName));
#else
	return 0;
#endif
}

int stub38f408_stub38f408_QmlRegisterUncreatableType(char* uri, int versionMajor, int versionMinor, char* qmlName, struct Moc_PackedString message)
{
#ifdef QT_QML_LIB
	return qmlRegisterUncreatableType<stub38f408>(const_cast<const char*>(uri), versionMajor, versionMinor, const_cast<const char*>(qmlName), QString::fromUtf8(message.data, message.len));
#else
	return 0;
#endif
}

void* stub38f408___children_atList(void* ptr, int i)
{
	return ({QObject * tmp = static_cast<QList<QObject *>*>(ptr)->at(i); if (i == static_cast<QList<QObject *>*>(ptr)->size()-1) { static_cast<QList<QObject *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void stub38f408___children_setList(void* ptr, void* i)
{
	static_cast<QList<QObject *>*>(ptr)->append(static_cast<QObject*>(i));
}

void* stub38f408___children_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject *>();
}

void* stub38f408___dynamicPropertyNames_atList(void* ptr, int i)
{
	return new QByteArray(({QByteArray tmp = static_cast<QList<QByteArray>*>(ptr)->at(i); if (i == static_cast<QList<QByteArray>*>(ptr)->size()-1) { static_cast<QList<QByteArray>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void stub38f408___dynamicPropertyNames_setList(void* ptr, void* i)
{
	static_cast<QList<QByteArray>*>(ptr)->append(*static_cast<QByteArray*>(i));
}

void* stub38f408___dynamicPropertyNames_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QByteArray>();
}

void* stub38f408___findChildren_atList(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void stub38f408___findChildren_setList(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* stub38f408___findChildren_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* stub38f408___findChildren_atList3(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void stub38f408___findChildren_setList3(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* stub38f408___findChildren_newList3(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* stub38f408_NewStub(void* parent)
{
	if (dynamic_cast<QGraphicsObject*>(static_cast<QObject*>(parent))) {
		return new stub38f408(static_cast<QGraphicsObject*>(parent));
	} else if (dynamic_cast<QGraphicsWidget*>(static_cast<QObject*>(parent))) {
		return new stub38f408(static_cast<QGraphicsWidget*>(parent));
	} else if (dynamic_cast<QLayout*>(static_cast<QObject*>(parent))) {
		return new stub38f408(static_cast<QLayout*>(parent));
	} else if (dynamic_cast<QOffscreenSurface*>(static_cast<QObject*>(parent))) {
		return new stub38f408(static_cast<QOffscreenSurface*>(parent));
	} else if (dynamic_cast<QPaintDeviceWindow*>(static_cast<QObject*>(parent))) {
		return new stub38f408(static_cast<QPaintDeviceWindow*>(parent));
	} else if (dynamic_cast<QPdfWriter*>(static_cast<QObject*>(parent))) {
		return new stub38f408(static_cast<QPdfWriter*>(parent));
	} else if (dynamic_cast<QQuickItem*>(static_cast<QObject*>(parent))) {
		return new stub38f408(static_cast<QQuickItem*>(parent));
	} else if (dynamic_cast<QWidget*>(static_cast<QObject*>(parent))) {
		return new stub38f408(static_cast<QWidget*>(parent));
	} else if (dynamic_cast<QWindow*>(static_cast<QObject*>(parent))) {
		return new stub38f408(static_cast<QWindow*>(parent));
	} else {
		return new stub38f408(static_cast<QObject*>(parent));
	}
}

void stub38f408_DestroyStub(void* ptr)
{
	static_cast<stub38f408*>(ptr)->~stub38f408();
}

void stub38f408_DestroyStubDefault(void* ptr)
{
	Q_UNUSED(ptr);

}

void stub38f408_ChildEventDefault(void* ptr, void* event)
{
	static_cast<stub38f408*>(ptr)->QObject::childEvent(static_cast<QChildEvent*>(event));
}

void stub38f408_ConnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<stub38f408*>(ptr)->QObject::connectNotify(*static_cast<QMetaMethod*>(sign));
}

void stub38f408_CustomEventDefault(void* ptr, void* event)
{
	static_cast<stub38f408*>(ptr)->QObject::customEvent(static_cast<QEvent*>(event));
}

void stub38f408_DeleteLaterDefault(void* ptr)
{
	static_cast<stub38f408*>(ptr)->QObject::deleteLater();
}

void stub38f408_DisconnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<stub38f408*>(ptr)->QObject::disconnectNotify(*static_cast<QMetaMethod*>(sign));
}

char stub38f408_EventDefault(void* ptr, void* e)
{
	return static_cast<stub38f408*>(ptr)->QObject::event(static_cast<QEvent*>(e));
}

char stub38f408_EventFilterDefault(void* ptr, void* watched, void* event)
{
	return static_cast<stub38f408*>(ptr)->QObject::eventFilter(static_cast<QObject*>(watched), static_cast<QEvent*>(event));
}



void stub38f408_TimerEventDefault(void* ptr, void* event)
{
	static_cast<stub38f408*>(ptr)->QObject::timerEvent(static_cast<QTimerEvent*>(event));
}

#include "moc_moc.h"
