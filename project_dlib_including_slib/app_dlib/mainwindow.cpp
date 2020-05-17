#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->calc, &QPushButton::clicked, this, &MainWindow::calculus);

}

void MainWindow::calculus()
{
    Dlib l;
    ui->result->setText(QString::number(l.plus(ui->a->value(),ui->b->value())));

    qDebug() << l.plusminus(ui->a->value(),ui->b->value(), 5,10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

