#include "log_form.h"
#include "ui_log_form.h"

Log_Form::Log_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Log_Form)
{
    ui->setupUi(this);
}

Log_Form::~Log_Form()
{
    delete ui;
}

void Log_Form::on_LoginButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if (username == "hanglider" && password == "admin") {
        emit loginSuccess();  // Отправляем сигнал об успешном логине
    }
}
