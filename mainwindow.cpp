#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_interact_clicked()
{

}


void MainWindow::on_inventory_clicked()
{

}


void MainWindow::on_map_clicked()
{

}


void MainWindow::on_help_clicked()
{

}

