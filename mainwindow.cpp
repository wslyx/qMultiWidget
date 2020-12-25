#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginwin.h"
#include "setwin.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//添加登录界面头文件
//注销进入到登录界面
void MainWindow::on_backLoginBt_clicked()
{
    LoginWin *win = new LoginWin;//创建登录界面
    win->show();//显示登录界面
    delete this;//把主界面删除
}

//在主界面进入到设置界面
void MainWindow::on_enterSetBt_clicked()
{
    //创建设置界面并且把this传入设置界面用于后面返回
    //注意MainWindow,SetWin界面在设计的时候（选择MainWiindow界面模板设计）实现
    SetWin *win = new SetWin(this);
    win->show();
    this->hide(); //主界面隐藏--后期直接可以显示
}
