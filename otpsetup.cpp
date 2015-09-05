#include "otpsetup.h"
#include "otpinstall.h"
#include "ui_otpsetup.h"
#include <QtGui>
#include <QMessageBox>
#include <QtWebKit/QtWebKit>

otpsetup::otpsetup(QWidget *parent)
{
    setupUi(this);

    releaseCommandLine->setIconSize (QSize(0,0));
    installCommandLine->setIconSize (QSize(0,0));
    exitCommandLine->setIconSize (QSize(0,0));

    //初始化链接槽
    connect (welcomeCommandLine,SIGNAL(clicked()),this,SLOT(welcomeButton()));
    connect (releaseCommandLine,SIGNAL(clicked()),this,SLOT(releaseButton()));
    connect (installCommandLine,SIGNAL(clicked()),this,SLOT(installButton()));
    connect (exitCommandLine,SIGNAL(clicked()),this,SLOT(exitButton()));
    otpWebView->page()->setLinkDelegationPolicy(QWebPage::DelegateAllLinks);
    connect(otpWebView->page(),SIGNAL(linkClicked(QUrl)),this,SLOT(clickLinkOnInstall(QUrl)));

    this->setWindowTitle ("OTP Setup Launchpad");
    welcomeButton ();
}

void otpsetup::clickLinkOnInstall(const QUrl &url){
    QString urlInfo = url.toString();
    if(urlInfo.contains("installnew")){
        otpInstall *otpInstallDialog = new otpInstall;
        otpInstallDialog->show();
        this->close();
    } else if(urlInfo.contains("installexist")) {
        ;
    } else {
        installButton();
    }
}

void otpsetup::welcomeButton(){

    //初始化控件
    welcomeCommandLine->setIconSize (QSize(20,20));
    releaseCommandLine->setIconSize (QSize(0,0));
    installCommandLine->setIconSize (QSize(0,0));
    exitCommandLine->setIconSize (QSize(0,0));

    //初始化内容
    QString filePath;
    getHtmlFilePath(filePath,QString("welcome.html"));
    otpWebView->setUrl(QUrl(filePath));
}

void otpsetup::releaseButton(){

    //初始化控件
    releaseCommandLine->setIconSize (QSize(20,20));
    welcomeCommandLine->setIconSize (QSize(0,0));
    installCommandLine->setIconSize (QSize(0,0));
    exitCommandLine->setIconSize (QSize(0,0));

    //初始化内容
    QString filePath;
    getHtmlFilePath(filePath,QString("releaseInfo.html"));
    otpWebView->setUrl(QUrl(filePath));
}

void otpsetup::installButton(){

    //初始化控件
    installCommandLine->setIconSize (QSize(20,20));
    welcomeCommandLine->setIconSize (QSize(0,0));
    releaseCommandLine->setIconSize (QSize(0,0));
    exitCommandLine->setIconSize (QSize(0,0));

    //初始化内容
    QString filePath;
    getHtmlFilePath(filePath,QString("install.html"));
    otpWebView->setUrl(QUrl(filePath));
}

void otpsetup::exitButton(){

    //初始化控件
    exitCommandLine->setIconSize (QSize(20,20));
    welcomeCommandLine->setIconSize (QSize(0,0));
    releaseCommandLine->setIconSize (QSize(0,0));
    installCommandLine->setIconSize (QSize(0,0));

    //调用closeEvent
    QMessageBox::StandardButton button = QMessageBox::information (0,QString("OTP Setup Launchpad"),QString("Are you sure you want to quit?"),QMessageBox::Yes | QMessageBox::No);
     if(button == QMessageBox::Yes){
         this->close();
     } else {
         ;
     }
}

void otpsetup::getHtmlFilePath(QString &filePath, const QString &fileName){

    filePath = QCoreApplication::applicationDirPath();
    quint32 position = filePath.indexOf("/otpsetup");
    filePath = filePath.left(position+QString("/otpsetup").length());
    filePath += QString("/files/%1").arg(fileName);
}

void otpsetup::closeEvent ( QCloseEvent * event ){
   ;
}


