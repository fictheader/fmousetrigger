#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    const auto left_click = fmt::LeftClick([]()->void{std::cout << "Hello Left Clicker from Outside!" << std::endl;});
    MainWindow w(nullptr, left_click);
    w.show();

    return a.exec();
}
