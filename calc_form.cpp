#include "calc_form.h"

Calc_Form::Calc_Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calc_Form)
{
    ui->setupUi(this);
}

Calc_Form::~Calc_Form()
{
    delete ui;
}
