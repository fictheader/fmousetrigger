#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent, const fmt::LeftClick left_click) :
    QMainWindow(parent),

    right_click([]()->void{
                std::cout << "Hello Right Clicker!" << std::endl;
                std::cout << "zzz..." << std::endl;
                }),

    mouse_trigger(FMouseTrigger(right_click, left_click, fmt::MiddleClick(), fmt::BackClick()))
{
}

MainWindow::~MainWindow()
{
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::RightButton){
        const auto right_click = mouse_trigger.get_right_click_trigger();
        right_click.right_click_trigger();
    }

    else if(event->button() == Qt::LeftButton){
        const auto left_click = mouse_trigger.get_left_click_trigger();
        left_click.left_click_trigger();
    }
}

