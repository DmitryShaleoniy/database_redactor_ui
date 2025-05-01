/********************************************************************************
** Form generated from reading UI file 'maximdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAXIMDIALOG_H
#define UI_MAXIMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_MaximDialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *BdName;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QLineEdit *port;
    QLabel *label_4;
    QCheckBox *show_password;
    QLineEdit *login;
    QLabel *label_2;
    QLineEdit *HostNamEdit;
    QLabel *label_5;
    QLineEdit *password;

    void setupUi(QDialog *MaximDialog)
    {
        if (MaximDialog->objectName().isEmpty())
            MaximDialog->setObjectName("MaximDialog");
        MaximDialog->resize(352, 224);
        gridLayout_3 = new QGridLayout(MaximDialog);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(MaximDialog);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        BdName = new QLineEdit(MaximDialog);
        BdName->setObjectName("BdName");

        gridLayout_2->addWidget(BdName, 0, 1, 1, 3);

        buttonBox = new QDialogButtonBox(MaximDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout_2->addWidget(buttonBox, 0, 4, 3, 1);

        label_3 = new QLabel(MaximDialog);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        port = new QLineEdit(MaximDialog);
        port->setObjectName("port");

        gridLayout_2->addWidget(port, 2, 1, 1, 3);

        label_4 = new QLabel(MaximDialog);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        show_password = new QCheckBox(MaximDialog);
        show_password->setObjectName("show_password");

        gridLayout_2->addWidget(show_password, 4, 4, 1, 1);

        login = new QLineEdit(MaximDialog);
        login->setObjectName("login");

        gridLayout_2->addWidget(login, 3, 1, 1, 3);

        label_2 = new QLabel(MaximDialog);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        HostNamEdit = new QLineEdit(MaximDialog);
        HostNamEdit->setObjectName("HostNamEdit");

        gridLayout_2->addWidget(HostNamEdit, 1, 1, 1, 3);

        label_5 = new QLabel(MaximDialog);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        password = new QLineEdit(MaximDialog);
        password->setObjectName("password");
        QFont font;
        font.setStrikeOut(false);
        password->setFont(font);

        gridLayout_2->addWidget(password, 4, 1, 1, 3);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(MaximDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MaximDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MaximDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MaximDialog);
    } // setupUi

    void retranslateUi(QDialog *MaximDialog)
    {
        MaximDialog->setWindowTitle(QCoreApplication::translate("MaximDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MaximDialog", "\320\221\320\224", nullptr));
        label_3->setText(QCoreApplication::translate("MaximDialog", "\320\237\320\276\321\200\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("MaximDialog", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        show_password->setText(QCoreApplication::translate("MaximDialog", "Show", nullptr));
        label_2->setText(QCoreApplication::translate("MaximDialog", "\320\241\320\265\321\200\320\262\320\265\321\200", nullptr));
        label_5->setText(QCoreApplication::translate("MaximDialog", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        password->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MaximDialog: public Ui_MaximDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAXIMDIALOG_H
