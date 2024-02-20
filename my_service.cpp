#include "my_service.h"
#include <QDebug>

MyService::MyService(QObject *parent) : QObject(parent)
{
}

void MyService::sendMessage(const QString &message)
{
    qDebug() << "Получено сообщение:" << message;
}
