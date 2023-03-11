#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 通过ui->访问ui文件中的2个按钮
    ui->loginButton->setFixedSize(100,30);
    ui->registerButton->setFixedSize(100,30);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
{
    qDebug() << "on_loginButton_clicked";
}

void MainWindow::on_registerButton_clicked() {
    qDebug() << "on_registerButton_clicked";
}
