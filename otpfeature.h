#ifndef OTPFEATURES_H
#define OTPFEATURES_H

#include <QWidget>
#include "ui_otpfeature.h"

class otpFeature : public QWidget, public Ui::otpFeature
{
    Q_OBJECT

public:
    otpFeature(QWidget *parent = 0);
private:
    QMap<QString,QIcon> otpFeature_icon;
};

#endif // OTPFEATURES_H
