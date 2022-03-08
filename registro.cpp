#include "registro.h"
#include "ui_registro.h"

Registro::Registro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Registro)
{
    ui->setupUi(this);
}

Registro::~Registro()
{
    delete ui;
}

void Registro::on_GuardarBtn_clicked()
{

}
// boton cancelarG
void Registro::on_CancelarRbtn_clicked()
{
    close();
}
