#ifndef OTPEXIST_H
#define OTPEXIST_H

#include <QWidget>
#include "ui_otpexist.h"

class otpExist:public QWidget, public Ui::otpExist
{
    Q_OBJECT

public:
    otpExist(QWidget *parent = 0);
};

#endif // OTPEXIST_H
