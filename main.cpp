#include <QCoreApplication>
#include <QDBusConnection>
#include <QDBusMessage>
#include <QDebug>
#include "my_service.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    // Создаем экземпляр нашего сервиса
    MyService service;

    // Подключаемся к сессионной шине DBUS
    QDBusConnection connection = QDBusConnection::sessionBus();

    // Регистрируем наш сервис на шине под именем "org.example.MyService"
    if (!connection.registerService("org.example.MyService")) {
        qCritical() << "Не удалось зарегистрировать сервис:" << connection.lastError().message();
        return 1;
    }

    // Регистрируем наш объект на шине под путем "/MyService"
    if (!connection.registerObject("/MyService", &service)) {
        qCritical() << "Не удалось зарегистрировать объект:" << connection.lastError().message();
        return 2;
    }

    qDebug() << "Сервис успешно зарегистрирован на шине DBUS";

    return app.exec();
}