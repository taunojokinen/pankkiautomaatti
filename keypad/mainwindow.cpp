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

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    QLinearGradient linearGradient(QPointF(200,100), QPointF(50,300));
    linearGradient.setColorAt(0, QColor(236,236,236,255));
    linearGradient.setColorAt(0.5, QColor(224,224,224,255));
    linearGradient.setColorAt(1, QColor(215,215,215,255));
    QRect rectangle (50,50,430,330);
    painter.fillRect(rectangle,linearGradient);
    painter.drawRoundedRect(rectangle, 20.0, 15.0);
}

