#ifndef FINDBOX_H
#define FINDBOX_H

#include <QDialog>

namespace Ui {
class findBox;
}

class findBox : public QDialog
{
    Q_OBJECT

public:
    explicit findBox(QWidget *parent = nullptr);
    ~findBox();
signals:
    void onSearch(const QString &accnum);

private slots:
    void searchAcc();

private:
    Ui::findBox *ui;
};

#endif // FINDBOX_H
