#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "mittari.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void print(float);
signals:
    void begin();
public slots:
    void tulosta(float);

private slots:
    void on_start_clicked();



private:
    Ui::MainWindow *ui;
    mittari * pmittari;
};
#endif // MAINWINDOW_H
