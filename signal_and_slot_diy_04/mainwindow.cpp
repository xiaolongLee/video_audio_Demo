#include "mainwindow.h"
#include "sender.h"
#include "receiver.h"
#include <QDebug>
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QPushButton *btn = new QPushButton;
    btn->setText("按钮");
    btn->setFixedSize(100,40);
    btn->setParent(this);
//    connect(btn,&QPushButton::clicked,this,&MainWindow::handleClick);
//    connect(btn, &QPushButton::clicked,[](){
//        qDebug() << "点击了按钮";
//    });


   // 创建对象
    Sender *sender = new Sender;
    Receiver *reciver = new Receiver;

//    // 连接
//    connect(btn,&QPushButton::clicked,sender,&Sender::exit);
    //        emit sender->exit();

    connect(sender,&Sender::exit, [](){
        qDebug() << "lambda handle exit";
    });

//    connect(sender,&Sender::exit1,[](int n1, int n2) {
//        qDebug() << "Lambda" << n1 << n2;
//    });
//          int a = emit sender->exit1(10,20);
//          qDebug() << a;

//    connect(sender,&Sender::exit,reciver,&Receiver::handleExit);
//       emit sender->exit();

//      connect(sender,&Sender::exit1,reciver,&Receiver::handleExit1);
//      int a = emit sender->exit1(10,20);
//      qDebug() << a;

    //连接两个信号
//    connect(sender,&Sender::exit,sender,&Sender::exit1);
//    connect(sender,&Sender::exit1,sender,&Sender::exit);



//    //发出信号
//    //最终会调用Receiver::handelExit函数


    //销毁对象
    delete sender;
    delete reciver;


}

MainWindow::~MainWindow()
{
}

void MainWindow::handleClick() {
    qDebug() << "点击了按钮 - handleClick";
}
