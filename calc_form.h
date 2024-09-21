#ifndef CALC_FORM_H
#define CALC_FORM_H

#include <QWidget>

namespace Ui {
class Calc_Form;
}

class Calc_Form : public QWidget
{
    Q_OBJECT

public:
    explicit Calc_Form(QWidget *parent = nullptr);
    ~Calc_Form();

private:
    Ui::Calc_Form *ui;
};

#endif // CALC_FORM_H
