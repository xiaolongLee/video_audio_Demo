#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>

class Receiver : public QObject
{ Q_OBJECT
public:
    explicit Receiver(QObject *parent = nullptr);

public slots:
       void handleExit();
       int handleExit1(int n1,int n2);
       void  handleExit2(int n1,int n2);
};

#endif // RECEIVER_H
