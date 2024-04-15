#include "notentativedialog.h"
#include "ui_notentativedialog.h"

NoTentativeDialog::NoTentativeDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NoTentativeDialog)
{
    ui->setupUi(this);
}

NoTentativeDialog::~NoTentativeDialog()
{
    delete ui;
}

void NoTentativeDialog::on_pushButton_clicked()
{
    close();
}

