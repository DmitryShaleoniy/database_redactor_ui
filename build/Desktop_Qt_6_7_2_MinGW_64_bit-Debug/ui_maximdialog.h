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
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_MaximDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *BdName;
    QLabel *label_2;
    QLineEdit *HostNamEdit;
    QLabel *label_3;
    QLineEdit *port;
    QLabel *label_4;
    QLineEdit *login;
    QLabel *label_5;
    QLineEdit *password;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MaximDialog)
    {
        if (MaximDialog->objectName().isEmpty())
            MaximDialog->setObjectName("MaximDialog");
        MaximDialog->resize(336, 134);
        gridLayout = new QGridLayout(MaximDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(MaximDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        BdName = new QLineEdit(MaximDialog);
        BdName->setObjectName("BdName");

        formLayout->setWidget(0, QFormLayout::FieldRole, BdName);

        label_2 = new QLabel(MaximDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        HostNamEdit = new QLineEdit(MaximDialog);
        HostNamEdit->setObjectName("HostNamEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, HostNamEdit);

        label_3 = new QLabel(MaximDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        port = new QLineEdit(MaximDialog);
        port->setObjectName("port");

        formLayout->setWidget(2, QFormLayout::FieldRole, port);

        label_4 = new QLabel(MaximDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        login = new QLineEdit(MaximDialog);
        login->setObjectName("login");

        formLayout->setWidget(3, QFormLayout::FieldRole, login);

        label_5 = new QLabel(MaximDialog);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        password = new QLineEdit(MaximDialog);
        password->setObjectName("password");

        formLayout->setWidget(4, QFormLayout::FieldRole, password);


        horizontalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(MaximDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(MaximDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MaximDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MaximDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MaximDialog);
    } // setupUi

    void retranslateUi(QDialog *MaximDialog)
    {
        MaximDialog->setWindowTitle(QCoreApplication::translate("MaximDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MaximDialog", "\320\221\320\224", nullptr));
        label_2->setText(QCoreApplication::translate("MaximDialog", "\320\241\320\265\321\200\320\262\320\265\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("MaximDialog", "\320\237\320\276\321\200\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("MaximDialog", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_5->setText(QCoreApplication::translate("MaximDialog", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        password->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MaximDialog: public Ui_MaximDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAXIMDIALOG_H
