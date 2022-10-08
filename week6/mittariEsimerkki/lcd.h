#ifndef LCD_H
#define LCD_H

#include <QObject>
#include <QDebug>
class MainWindow;

class LCD : public QObject
{
    Q_OBJECT
public:
    explicit LCD(MainWindow * ptr,QObject *parent = nullptr);
    virtual ~LCD();

signals:
    void printOK();
public slots:
    void printSlot(float);
private:
    MainWindow * assosiationToMainwindow;

};

#endif // LCD_H
