#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "slib.h" // AVEC LES LIB STATIC IMPOSSIBLE d'INCLUE dautre car les includes attendre les enfant slib inclus slibsub
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void calculus();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
