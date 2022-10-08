#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer;
    s = 0;
    m = 0;
    h = 0;
    connect(pQTimer,SIGNAL(timeout()),
            this, SLOT(handleTimeout()));
    pQTimer->start(10);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
    delete pQTimer;
    pQTimer = nullptr;
}

void MainWindow::handleTimeout()
{
     s++;
     if(s==60)
     {
         s = 0;
         m++;
         if(m==60)
         {
             m = 0;
             h++;
             if(h==24)
             {
                 h = 0;
             }
         }
     }
     ui->hours->setText(QString::number(h));
     ui->minutes->setText(QString::number(m));
     ui->seconds->setText(QString::number(s));
}

