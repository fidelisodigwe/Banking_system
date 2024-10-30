#ifndef UPDATEBOX_H
#define UPDATEBOX_H

#include <QDialog>

namespace Ui {
class updateBox;
}

class updateBox : public QDialog
{
    Q_OBJECT

public:
    explicit updateBox(QWidget *parent = nullptr);
    ~updateBox();
signals:
    void onUpdate(const QString &accnum, const QString &name,const QString &pw,const QString &phonenum, const QString &add);

private slots:
    void updateAccInfo();

private:
    Ui::updateBox *ui;
};

#endif // UPDATEBOX_H
