#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMessageBox>
#include <QTextStream>
#include <QtCore>
#include "addbox.h"
#include "findbox.h"
#include "updatebox.h"
#include "finddelbox.h"

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAdmin_clicked();

    void on_btnUser_clicked();

    void on_btnAdminlogout_clicked();

    void on_btnUserLogout_clicked();



    void on_btnAdminWithdraw_clicked();

    void on_okWithdrawBtn_clicked();

    void on_depositFundBtn_clicked();

    void on_btnAdminDeposit_clicked();

    void on_btnUserWithdraw_clicked();

    void on_btnUserDeposit_clicked();
    void getInfo(const QString &name,const QString &pw,const QString &phonenum,const QString &add,const QString &accnum);

    void adminAddUserFun();

    void searchFun();
    void  onFind(const QString &accnum);

    void chUserDataFun();
    void onUpdateAccInfo(const QString &accnum, const QString &name,const QString &pw,const QString &phonenum, const QString &add);

    void searchDelFun();
    void onFindDel(const QString &accnum);

    void on_btnchUseruserdata_clicked();

    void on_pushButton_2_clicked();

    void on_btnExitWithdraw_clicked();

private:
    Ui::MainWindow *ui;
    addBox *addbox;
    findBox *findbox;
    updateBox *updatebox;
    finddelBox *finddelbox;
};
#endif // MAINWINDOW_H
