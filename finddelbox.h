#ifndef FINDDELBOX_H
#define FINDDELBOX_H

#include <QDialog>

namespace Ui {
class finddelBox;
}

class finddelBox : public QDialog
{
    Q_OBJECT

public:
    explicit finddelBox(QWidget *parent = nullptr);
    ~finddelBox();
signals:
    void onSearchDel(const QString &accnum);

private slots:
    void searchDel();

private:
    Ui::finddelBox *ui;
};

#endif // FINDDELBOX_H
