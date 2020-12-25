#ifndef SETWIN_H
#define SETWIN_H

#include <QMainWindow>

namespace Ui {
class SetWin;
}

class SetWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit SetWin(QWidget *parent = 0);
    ~SetWin();

private slots:
    void on_backmainBt_clicked();

private:
    Ui::SetWin *ui;
};

#endif // SETWIN_H
