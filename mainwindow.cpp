#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include "notentativedialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString identifiant = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(identifiant == "Miniluchi" & password == "2709"){
        // Connected

    }else{
        // Wrong login
        nbTentative--;
        QMessageBox msgBox;
        msgBox.setText("Aucun compte ne correspond, attention il ne vous reste plus que : " + QString::number(nbTentative) + " tentative(s)");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
        ui->label_tentative->setText("Tentative : " + QString::number(nbTentative));

        if(nbTentative == 0){
            NoTentativeDialog *ntd = new NoTentativeDialog();
            ntd->show();
            close();
        }
    }

}

