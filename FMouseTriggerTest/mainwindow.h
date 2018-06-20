#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <iostream>
#include <FMouseTrigger/fmousetrigger.h>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr, const fmt::LeftClick left_click = fmt::LeftClick());
    ~MainWindow();

private:
    void mousePressEvent(QMouseEvent* event);
    const fmt::RightClick right_click;
    const FMouseTrigger mouse_trigger;
};

#endif // MAINWINDOW_H
