#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  //  ui->pushButton->setStyleSheet("QPushButton{background-color :rgb(211,211,111); }");
 //   ui->pushButton->setStyleSheet("QPushButton{border-radius: 5px;}");


}

MainWindow::~MainWindow()
{
    delete ui;
}

