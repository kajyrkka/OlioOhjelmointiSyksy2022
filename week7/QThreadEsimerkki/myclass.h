#ifndef MYCLASS_H
#define MYCLASS_H

#include <QThread>
#include <QTimer>
#include <QDebug>
class myClass:public QThread
{
    Q_OBJECT
public:
    myClass();
    ~myClass();
    virtual void run() override;

signals:
    void sendTick();
private:
    QTimer * pQTimer;
};

#endif // MYCLASS_H
