#ifndef OTPINSTALL_H
#define OTPINSTALL_H

#include <QWidget>
#include "ui_otpinstall.h"

class otpInstall : public QWidget, public Ui::otpInstall
{
    Q_OBJECT

public:
    otpInstall(QWidget *parent = 0);
private:
    void installWidgetShow();
    void installTypeWidgetShow();
    void installActionWidgetShow();
    void installDirectoryWidgetShow();
    void installDatabaseWidgetShow();
    void installProgressWidgetShow();
    void installSummaryWidgetShow();
private slots:
    void backButtonClick();
    void nextButtonClick();
    void finishButtonClick();
    void cancelButtonClick();
    void helpButtonClick();
};

#endif // OTPINSTALL_H
