#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete pmyClass;
}

void MainWindow::setGameInfoText(QString teksti, short luku)
{
    ui->label->setText(teksti);
    QFont font = ui->label->font();
    font.setPointSize(luku);
    font.setBold(true);
    ui->label->setFont(font);
}

void MainWindow::showTick()
{
    ui->lineEdit->setText("pelaa");
    qDebug()<<"montako kertaa tama tulee";
}


void MainWindow::on_pushButton_clicked()
{
    pmyClass = new myClass();
    connect(pmyClass,SIGNAL(sendTick()),
            this, SLOT(showTick()));
}


void MainWindow::on_pushButton_2_clicked()
{
    short a = 10;
    QString t = "Huuhaa";
    setGameInfoText(t,a);

}

