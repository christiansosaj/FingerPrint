#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "login.h"
#include "registro.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAcerca_de_QT_triggered();

    void on_actionContacto_triggered();

    void on_RegistrarseBtn_clicked();

    void on_AccederBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
