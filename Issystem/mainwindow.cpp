#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}
void MainWindow::Setup(){
    //this->showMaximized();

    this->menuBar();
    menuBar()->addMenu("test43");

}

MainWindow::~MainWindow()
{
    delete ui;
}
