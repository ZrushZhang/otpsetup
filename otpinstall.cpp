#include "otpinstall.h"
#include "ui_otpinstall.h"
#include <QtGui>

otpInstall::otpInstall(QWidget *parent)
{
    setupUi(this);

    install->setEnabled(true);
    installType->setEnabled(false);
    installAction->setEnabled(false);
    installDirectory->setEnabled(false);
    installDatabase->setEnabled(false);
    installProgress->setEnabled(false);
    installSummary->setEnabled(false);

    connect(nextButton,SIGNAL(clicked()),this,SLOT(nextButtonClick()));
    connect(backButton,SIGNAL(clicked()),this,SLOT(backButtonClick()));

    installWidgetShow();
}

void otpInstall::installWidgetShow(){
    installStackedWidget->setCurrentIndex(0);
}

void otpInstall::installTypeWidgetShow(){
    installStackedWidget->setCurrentIndex(1);
}

void otpInstall::installActionWidgetShow(){
    installStackedWidget->setCurrentIndex(2);
}

void otpInstall::installDirectoryWidgetShow(){
    installStackedWidget->setCurrentIndex(3);
}

void otpInstall::installDatabaseWidgetShow(){
    installStackedWidget->setCurrentIndex(4);
}

void otpInstall::installProgressWidgetShow(){
    installStackedWidget->setCurrentIndex(5);
}

void otpInstall::installSummaryWidgetShow(){
    installStackedWidget->setCurrentIndex(6);
}

void otpInstall::nextButtonClick(){

    if(installSummary->isEnabled()){
        finishButton->setEnabled(true);
    } else if(installProgress->isEnabled()){
        installSummary->setEnabled(true);
        installSummaryWidgetShow();
    } else if(installDatabase->isEnabled()){
        installProgress->setEnabled(true);
        installProgressWidgetShow();
    } else if(installDirectory->isEnabled()){
        installDatabase->setEnabled(true);
        installDatabaseWidgetShow();
    } else if(installAction->isEnabled()){
        installDirectory->setEnabled(true);
        installDirectoryWidgetShow();
    } else if(installType->isEnabled()){
        installAction->setEnabled(true);
        installActionWidgetShow();
    } else if(install->isEnabled()){
        installType->setEnabled(true);
        backButton->setEnabled(true);
        installTypeWidgetShow();
    }
}

void otpInstall::backButtonClick(){

    if(installSummary->isEnabled()){
        finishButton->setEnabled(false);
        installSummary->setEnabled(false);
        installProgressWidgetShow();
    } else if(installProgress->isEnabled()){
        installProgress->setEnabled(false);
        installDatabaseWidgetShow();
    } else if(installDatabase->isEnabled()){
        installDatabase->setEnabled(false);
        installDirectoryWidgetShow();
    } else if(installDirectory->isEnabled()){
        installDirectory->setEnabled(false);
        installActionWidgetShow();
    } else if(installAction->isEnabled()){
        installAction->setEnabled(false);
        installTypeWidgetShow();
    } else if(installType->isEnabled()){
        installType->setEnabled(false);
        installWidgetShow();
    }
}

void otpInstall::finishButtonClick(){
;
}

void otpInstall::cancelButtonClick(){
;
}

void otpInstall::helpButtonClick(){
;
}
