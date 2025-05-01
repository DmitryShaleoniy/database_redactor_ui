#include "maximdialog.h"
#include "ui_maximdialog.h"
#include <QDataStream>
#include <windows.h>
#include <string>
#include <fstream>
#include <iostream>

MaximDialog::MaximDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MaximDialog)
{
    //this->setFixedSize(226,335);
    ui->setupUi(this);

    std::ifstream out;
    out.open("file.txt");

    QLineEdit *lines[5] = {ui->BdName, ui->HostNamEdit, ui->port, ui->login, ui->password};

    if(out.is_open()){
        int i = 0;
        while (!out.eof()){
            std::string dialog_line;
            out >> dialog_line;
            lines[i]->setText(QString(dialog_line.c_str()));
            i++;
        }
        out.close();
    }
    qDebug() << "file closed in maxim dialog";
    ui->password->setEchoMode(QLineEdit::Password);

}

MaximDialog::~MaximDialog()
{
    delete ui;
}

void MaximDialog::getConnectionParameters(QString &databaseName, QString &hostName, int &port, QString &userName, QString &password)
{
    databaseName = ui->BdName->text()      ;
    hostName     = ui->HostNamEdit->text() ;
    port         = ui->port->text().toInt();
    userName     = ui->login->text()       ;
    password     = ui->password->text()    ;
}

void MaximDialog::on_show_password_checkStateChanged(const Qt::CheckState &arg1){
    if(arg1 == Qt::Checked){
        ui->password->setEchoMode(QLineEdit::Normal);
    }
    else{
        ui->password->setEchoMode(QLineEdit::Password);
    }
}

