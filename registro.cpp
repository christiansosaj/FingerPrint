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
// boton guarda

// boton cancelarG
void Registro::on_CancelarRbtn_clicked()
{
    close();
}

void Registro::on_GuardarRBtn_clicked()
{

}
