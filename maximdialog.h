#ifndef MAXIMDIALOG_H
#define MAXIMDIALOG_H

#include <QDialog>

namespace Ui {
class MaximDialog;
}

class MaximDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MaximDialog(QWidget *parent = nullptr);
    ~MaximDialog();
    void getConnectionParameters(QString &databaseName,
                                 QString &hostName    ,
                                 int     &port        ,
                                 QString &userName    ,
                                 QString &password     );

private:
    Ui::MaximDialog *ui;
    FILE* user;
};

#endif // MAXIMDIALOG_H
