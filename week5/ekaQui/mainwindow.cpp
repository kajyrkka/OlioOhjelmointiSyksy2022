#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , huuhaa(5)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_nappi_clicked()
{
    ui->ikkuna->setText("pelaako nyt");
    ui->nappi->setText("pushed!");
}

