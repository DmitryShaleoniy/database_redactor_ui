/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *light_theme;
    QAction *dark_theme;
    QAction *perfect_theme;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTableView *Table;
    QListView *listView;
    QTextEdit *commandEdit;
    QPlainTextEdit *historyEdit;
    QLabel *error_label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1009, 680);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        light_theme = new QAction(MainWindow);
        light_theme->setObjectName("light_theme");
        dark_theme = new QAction(MainWindow);
        dark_theme->setObjectName("dark_theme");
        perfect_theme = new QAction(MainWindow);
        perfect_theme->setObjectName("perfect_theme");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setSizeIncrement(QSize(0, 0));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        Table = new QTableView(splitter);
        Table->setObjectName("Table");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Table->sizePolicy().hasHeightForWidth());
        Table->setSizePolicy(sizePolicy);
        Table->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        Table->setLineWidth(4);
        Table->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        splitter->addWidget(Table);
        listView = new QListView(splitter);
        listView->setObjectName("listView");
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);
        splitter->addWidget(listView);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        commandEdit = new QTextEdit(centralwidget);
        commandEdit->setObjectName("commandEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(commandEdit->sizePolicy().hasHeightForWidth());
        commandEdit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(false);
        font.setItalic(true);
        commandEdit->setFont(font);
        commandEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::ArrowCursor)));
        commandEdit->setMouseTracking(false);

        gridLayout->addWidget(commandEdit, 1, 0, 1, 1);

        historyEdit = new QPlainTextEdit(centralwidget);
        historyEdit->setObjectName("historyEdit");
        historyEdit->setEnabled(true);
        sizePolicy.setHeightForWidth(historyEdit->sizePolicy().hasHeightForWidth());
        historyEdit->setSizePolicy(sizePolicy);
        historyEdit->setBaseSize(QSize(1, 0));
        historyEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::ArrowCursor)));
        historyEdit->setToolTipDuration(-1);
        historyEdit->setCursorWidth(1);

        gridLayout->addWidget(historyEdit, 2, 0, 1, 1);

        error_label = new QLabel(centralwidget);
        error_label->setObjectName("error_label");

        gridLayout->addWidget(error_label, 3, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        gridLayout->setRowStretch(0, 10);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setRowStretch(4, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1009, 29));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu->addSeparator();
        menu_2->addAction(light_theme);
        menu_2->addAction(dark_theme);
        menu_2->addAction(perfect_theme);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sofia", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
        light_theme->setText(QCoreApplication::translate("MainWindow", "\320\241\320\262\320\265\321\202\320\273\320\260\321\217 \321\202\320\265\320\274\320\260", nullptr));
        dark_theme->setText(QCoreApplication::translate("MainWindow", "\320\242\321\221\320\274\320\275\320\260\321\217 \321\202\320\265\320\274\320\260", nullptr));
        perfect_theme->setText(QCoreApplication::translate("MainWindow", "\320\230\320\264\320\265\320\260\320\273\321\214\320\275\320\260\321\217 \321\202\320\265\320\274\320\260", nullptr));
        error_label->setText(QCoreApplication::translate("MainWindow", " errors:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "RUN", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\236\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
