#include "anotherwindow.h"
#include "ui_anotherwindow.h"

AnotherWindow::AnotherWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AnotherWindow)
{
    ui->setupUi(this);
}

AnotherWindow::~AnotherWindow()
{
    delete ui;
}

void AnotherWindow::on_pushButton_clicked()
{
    ui->pushButton->setText("jep");
}

