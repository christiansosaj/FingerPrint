#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"

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


void MainWindow::on_actionAcerca_de_QT_triggered()
{
    QMessageBox::aboutQt(this,"QT");
}

void MainWindow::on_actionContacto_triggered()
{
    QString txt;
    txt="Autor: Christian Sosa Jiménez\n";
    txt += "Facultad 4 Universidad de las Ciencias Informáticas\n";
    txt +="Correos: christiansj@estudiantes.uci.cu o christiansosaj@gmail.com\n";
    txt +="Teléfono: +53 54571775\n";
    txt +="Software: (C) FingerPrint (R)\n";
    QMessageBox::about(this,"FingerPrint", txt);
}

void MainWindow::on_RegistrarseBtn_clicked()
{
    Registro *registro = new Registro(0);
    registro->show();
}

void MainWindow::on_AccederBtn_clicked()
{
    Login *login =new Login(0);
    login->show();
}
