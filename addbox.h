#ifndef ADDBOX_H
#define ADDBOX_H

#include <QDialog>

namespace Ui {
class addBox;
}

class addBox : public QDialog
{
    Q_OBJECT

public:
    explicit addBox(QWidget *parent = nullptr);
    ~addBox();
signals:
    void enterInfo(const QString &name,const QString &pw,const QString &phonenum,const QString &add,const QString &accnum );

private slots:
    void getVal();

private:
    Ui::addBox *ui;
};

#endif // ADDBOX_H
