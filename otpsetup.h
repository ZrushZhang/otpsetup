#ifndef OTPSETUP_H
#define OTPSETUP_H

#include <QWidget>
#include "ui_otpsetup.h"

class otpsetup : public QWidget, public Ui::otpsetup
{
    Q_OBJECT
    
public:
    otpsetup(QWidget *parent = 0);
private slots:
    void welcomeButton();
    void releaseButton();
    void installButton();
    void exitButton();
    void closeEvent ( QCloseEvent * event );
    void clickLinkOnInstall(const QUrl &url);
private:
    void getHtmlFilePath(QString &filePath,const QString &fileName);
private:
    QString currentPath;
};

#endif // OTPSETUP_H
