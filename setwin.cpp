#include "setwin.h"
#include "ui_setwin.h"

SetWin::SetWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SetWin)
{
    ui->setupUi(this);
}

SetWin::~SetWin()
{
    delete ui;
}

//在设置界面返回主界面
void SetWin::on_backmainBt_clicked()
{
    this->parentWidget()->show();
    delete this;//释放设置界面 也可以用this->deleteLater()但是这个函数不会立即释放空间
}
