#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pmittari = new mittari(this,this);
    connect(this,SIGNAL(begin()),
            pmittari,SLOT(beginSlot()));

    //connect(pmittari,SIGNAL(printSignal(float)),
    //        this, SLOT(tulosta(float)),Qt::QueuedConnection);
    connect(pmittari,SIGNAL(printSignal(float)),
            this, SLOT(tulosta(float)),Qt::DirectConnection);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pmittari;
}

void MainWindow::print(float temp)
{
    ui->lineEdit->setText(QString::number(temp));
}

void MainWindow::tulosta(float temp)
{
    qDebug()<<"Tämä on siis se slot funktio, josta kerrottiin kissan kokoisilla...";
    ui->lineEdit->setText(QString::number(temp));
}


void MainWindow::on_start_clicked()
{
    qDebug()<<"Nappia painettu lahetan begin signaalin";
    emit begin();
}



