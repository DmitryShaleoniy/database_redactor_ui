#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <maximdialog.h>
#include <QDataStream>
#include <QSqlDatabase>
#include <QShortcut>
#include <QWidget>
#include <windows.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_triggered();

    void on_pushButton_clicked();

    void on_listView_doubleClicked(const QModelIndex &index);

    void on_light_theme_triggered();

    void on_dark_theme_triggered();

    void on_perfect_theme_triggered();

private:
    Ui::MainWindow *ui;
    MaximDialog openDialog;
    QSqlDatabase db;

    FILE * historyText;

    void runQuery(QString p_command = "");
    void updateObjects();

    QShortcut *shortcut;
};
#endif // MAINWINDOW_H
