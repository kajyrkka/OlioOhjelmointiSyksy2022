#ifndef LAMPOTILASENSORI_H
#define LAMPOTILASENSORI_H

#include <QObject>
#include <QDebug>

class lampotilasensori : public QObject
{
    Q_OBJECT
public:
    explicit lampotilasensori(QObject *parent = nullptr);
    virtual ~lampotilasensori();
signals:
    void temperatureSignal(float);

public slots:
    void readTemperatureSlot();

private:
    float temperature;

};

#endif // LAMPOTILASENSORI_H
