#include "receiver.h"
#include <QDebug>

Receiver::Receiver(QObject *parent) : QObject(parent)
{

}

//void handleExit();
//int handleExit1(int n1,int n2);
//void  handleExit2(int n1,int n2);

// 实现槽函数,编写处理信号的代码
void Receiver::handleExit() {
    qDebug() << "Receiver::handleExit()";
}

int Receiver::handleExit1(int n1, int n2) {
    qDebug() << "Receiver::handleExit1" << n1;
    return n1 + n2;
}


void Receiver::handleExit2(int n1, int n2) {

    qDebug() << "Receiver::handleExit2";
}
