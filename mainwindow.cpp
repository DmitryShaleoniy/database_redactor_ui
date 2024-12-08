#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlError>
#include <QDataStream>
#include <QSqlDatabase>
#include <QTextEdit>
#include <QDebug>
#include <QStringListModel>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QVariant>
#include <QtSql/QSqlQueryModel>
#include <windows.h>
#include <string>
#include <QShortcut>
#include <mutex>
#include <fstream>
#include <iostream>
#include <ios>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    shortcut = new QShortcut(this);
    shortcut->setKey(Qt::CTRL | Qt::Key_Return);
    connect(shortcut, SIGNAL(activated()), this, SLOT(on_pushButton_clicked()));
    QPixmap pix("./cursor.png");
    QCursor cur(pix);
    ui->commandEdit->viewport()->setCursor(cur);

    QPalette m_pal;
    m_pal.setBrush(QPalette::Window, QBrush(QPixmap("./title.png")));
    m_pal.setColor(QPalette::Button, QColor(53, 53, 53));
    m_pal.setColor(QPalette::Base, QColor(128, 128, 128));
    m_pal.setColor(QPalette::Highlight, QColor(173, 209, 225));
    m_pal.setColor(QPalette::ButtonText, QColor(255, 255, 255));
    m_pal.setColor(QPalette::Text, QColor(255, 255, 255));
    m_pal.setColor(QPalette::WindowText, QColor(255, 255, 255));
    this->setPalette(m_pal);

    std::ifstream out;
    out.open("history.txt");

    if(out.is_open()){
        while (!out.eof()){
            qDebug("opened");
            std::string hist_str;
            getline(out, hist_str);
            QString q_hist(hist_str.c_str());
            ui->historyEdit->insertPlainText(q_hist + "\n");
        }
    }
    out.close();

    std::ifstream par;
    par.open("file.txt");
    if(par.is_open()){
        db = QSqlDatabase::addDatabase("QPSQL");
        std::string params;
        par >> params;
        db.setDatabaseName(QString(params.c_str()));
        par >> params;
        db.setHostName(QString(params.c_str()));
        par >> params;
        db.setPort(std::stoi(params));
        par >> params;
        db.setUserName(QString(params.c_str()));
        par >> params;
        db.setPassword(QString(params.c_str()));
        par.close();
        db.open();
        updateObjects();
    }
}

MainWindow::~MainWindow()
{
    std::ofstream in;
    in.open("history.txt");
    in << ui->historyEdit->toPlainText().toStdString();
    in.close();

    delete shortcut;
    delete ui;
}

void MainWindow::on_action_triggered()
{
    if (openDialog.exec()==QDialog::Accepted) {
        //ok
        db = QSqlDatabase::addDatabase("QPSQL");
            QString databaseName;
            QString hostName;
            int     port    ;
            QString userName;
            QString password;
            openDialog.getConnectionParameters(databaseName,
                                               hostName,
                                               port    ,
                                               userName,
                                               password);
        db.setDatabaseName(databaseName);
        db.setHostName    (hostName);
        db.setPort        (port   );
        db.setUserName    (userName);
        db.setPassword    (password);
        if(db.open()) {
            std::ofstream in;

            in.open("file.txt");
            in << databaseName.toStdString();
            in << " ";
            in << hostName.toStdString();
            in << " ";
            in << std::to_string(port);
            in << " ";
            in << userName.toStdString();
            in << " ";
            in << password.toStdString();
            in.close();
            qDebug() << "opened";
            updateObjects();
        }
        else {
            qDebug() << db.lastError().text();
        }
    }
}

void MainWindow::on_pushButton_clicked()
{
    runQuery();
}

void MainWindow::runQuery(QString p_command) {
    QString command = p_command.isEmpty() ? ui->commandEdit->toPlainText(): p_command;
    QSqlQueryModel *model = new QSqlQueryModel;
    model -> setQuery(command, db);
    ui->Table->setModel(model);

    if(!model->query().isActive()){
        ui->error_label->setText(model->lastError().text());
    }
    else if (p_command.isEmpty()){
        ui->historyEdit->insertPlainText(("\n" + command));
    }
    ui->commandEdit->setText("");
    updateObjects();
}

void MainWindow::updateObjects()
{
    QStringListModel *listModel = new QStringListModel();
    listModel->setHeaderData(0, Qt::Horizontal, QVariant("header"));
    QStringList tables;

    tables << db.tables(QSql::Tables)
           << db.tables(QSql::Views);

    listModel->setStringList(tables);

    ui->listView->setModel(listModel);
}

void MainWindow::on_listView_doubleClicked(const QModelIndex &index)
{
    QString name = index.data().toString();
    if (name.isEmpty()) return;
    runQuery("SELECT * FROM " + name + ";");
}

void MainWindow::on_light_theme_triggered()
{
    this->setPalette(style()->standardPalette());
    QPixmap pix("./cursor_black.png");
    QCursor cur(pix);
    ui->commandEdit->viewport()->setCursor(cur);
}

void MainWindow::on_dark_theme_triggered()
{
    QPalette m_pal;
    //m_pal.setColor(QPalette::Window, QColor(44, 44, 44));
    m_pal.setBrush(QPalette::Window, QBrush(QPixmap("./title.png")));
    m_pal.setColor(QPalette::Button, QColor(53, 53, 53));
    m_pal.setColor(QPalette::Highlight, QColor(173, 209, 225));
    m_pal.setColor(QPalette::ButtonText, QColor(255, 255, 255));
    m_pal.setColor(QPalette::WindowText, QColor(255, 255, 255));
    m_pal.setColor(QPalette::Base, QColor(126, 126, 126));
    m_pal.setColor(QPalette::Text, QColor(255, 255, 255));

    this->setPalette(m_pal);
    QPixmap pix("./cursor.png");
    QCursor cur(pix);
    ui->commandEdit->viewport()->setCursor(cur);
    //this->setCursor(cur);
}


void MainWindow::on_perfect_theme_triggered()
{
    // QPalette m_pal;
    // m_pal.setColor(QPalette::Window, QColor(44, 44, 44));
    // //m_pal.setBrush(QPalette::Window, QBrush(QPixmap("C:/Users/jjjjj/OneDrive/Рабочий стол/title.png")));
    // m_pal.setColor(QPalette::Button, QColor(53, 53, 53));

    // m_pal.setColor(QPalette::Highlight, QColor(173, 209, 225));
    // m_pal.setColor(QPalette::ButtonText, QColor(255, 255, 255));
    // m_pal.setColor(QPalette::WindowText, QColor(255, 255, 255));
    // //m_pal.setBrush(QPalette::Base, QBrush(QPixmap("C:/Users/jjjjj/OneDrive/Рабочий стол/брат стаса.png")));

    // ui->listView->setObjectName("listview");
    // QString styleSheet = QString("QListView#listview { "
    //                              "background-image: url(C:/Users/jjjjj/OneDrive/Рабочий стол/второй дедушка стаса.png); "
    //                              "background-repeat: no-repeat; "
    //                              "background-position: center; "
    //                              "}");
    // ui->listView->setStyleSheet(styleSheet);
    // ui->Table->setObjectName("Table");
    // QString styleSheet2 = QString("QTableView#Table { "
    //                              "background-image: url(C:/Users/jjjjj/OneDrive/Рабочий стол/брат стаса.jpg); "
    //                              "background-repeat: no-repeat; "
    //                              "background-position: center; "
    //                              "}");
    // ui->Table->setStyleSheet(styleSheet2);
    // m_pal.setColor(QPalette::Base, QColor(192, 192, 192));
    // this->setPalette(m_pal);
    QMessageBox::information(this, "Идеальная тема", "Вам это не надо");
}
