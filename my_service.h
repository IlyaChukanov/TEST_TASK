#ifndef MY_SERVICE_H
#define MY_SERVICE_H

#include <QObject>

// Наследуемся от QObject и используем макрос Q_CLASSINFO для указания имени интерфейса
class MyService : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.example.MyService")

public:
    explicit MyService(QObject *parent = nullptr);

public slots:
    // Определяем слот, который будет вызываться удаленно по сигналу sendMessage
    // Слот принимает строку в качестве аргумента и выводит ее в консоль
    void sendMessage(const QString &message);
};

#endif // MY_SERVICE_H
