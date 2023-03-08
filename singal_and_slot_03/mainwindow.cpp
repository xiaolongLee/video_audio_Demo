#include "mainwindow.h"
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // 设置窗口标题
    setWindowTitle("主窗口");

    // 设置窗口大小
    // 窗口可以通过拖拽边缘进行自由伸缩
//    resize(400,400);

    //设置窗口的固定大小
    // 窗口不能通过拖拽边缘进行自由伸缩
    setFixedSize(400,400);

    //设置窗口的位置
    // 以父控件的左上角为坐标原点
    // 没有父控件,就以屏幕的左上角作为坐标原点
    move(100,100);

    //创建按钮
    QPushButton *btn = new QPushButton;

    //设置按钮的文字
    btn->setText("登录");

    //设置父控件为当前窗口
    btn->setParent(this);

    //设置按钮的位置和大小
    btn->move(50,50);
    btn->resize(100,50);

    //创建第二个按钮
    new QPushButton("注册",this);

    // 连接信号与槽
    // 点击按钮,关闭MainWindow窗口
    // btn发出信号
    // MainWindow 接收信号 ,调用槽函数:close
    connect(btn,&QPushButton::clicked,this,&MainWindow::close);
    // 可以通过disconnect断开连接
//    disconnect(btn,&QPushButton::clicked,this,&MainWindow::close);

}


MainWindow::~MainWindow()
{
}

