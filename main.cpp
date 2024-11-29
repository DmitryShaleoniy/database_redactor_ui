#include "mainwindow.h"

#include <QApplication>
#include <QPixmap>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    MainWindow w;
    QPalette m_pal;
    m_pal.setColor(QPalette::Window, QColor(44, 44, 44));
    m_pal.setBrush(QPalette::Window, QBrush(QPixmap("C:/Users/jjjjj/OneDrive/Рабочий стол/title.png")));
    m_pal.setColor(QPalette::Button, QColor(53, 53, 53));
    m_pal.setColor(QPalette::Base, QColor(128, 128, 128));
    m_pal.setColor(QPalette::Highlight, QColor(173, 209, 225));
    //m_pal.setColor(QPalette::ButtonText, QColor(255, 255, 255));
    //m_pal.setColor(QPalette::Text, QColor(255, 255, 255));
    m_pal.setColor(QPalette::WindowText, QColor(255, 255, 255));
    w.setPalette(m_pal);
    w.show();
    return a.exec();
}
