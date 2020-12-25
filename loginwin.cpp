#include "loginwin.h"
#include "ui_loginwin.h"
#include <mainwindow.h>

LoginWin::LoginWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWin)
{
    ui->setupUi(this);
}

LoginWin::~LoginWin()
{
    delete ui;
}

//登录进入到主界面
void LoginWin::on_loginBt_clicked()
{
    //检查用户和密码

    //如果正确就进入到主界面(不需要返回到登录界面)
    MainWindow *win = new MainWindow;
    win->show();
    this->close();
}
