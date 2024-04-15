#ifndef NOTENTATIVEDIALOG_H
#define NOTENTATIVEDIALOG_H

#include <QDialog>

namespace Ui {
class NoTentativeDialog;
}

class NoTentativeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NoTentativeDialog(QWidget *parent = nullptr);
    ~NoTentativeDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NoTentativeDialog *ui;
};

#endif // NOTENTATIVEDIALOG_H
