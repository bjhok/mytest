#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //尝试第二次上传
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
