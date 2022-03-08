#ifndef REGISTRO_H
#define REGISTRO_H

#include <QMainWindow>

namespace Ui {
class Registro;
}

class Registro : public QMainWindow
{
    Q_OBJECT

public:
    explicit Registro(QWidget *parent = nullptr);
    ~Registro();

private slots:
    void on_GuardarBtn_clicked();

    void on_CancelarRbtn_clicked();

private:
    Ui::Registro *ui;
};

#endif // REGISTRO_H
