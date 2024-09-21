#include "mainwindow.h"
#include "log_form.h"
#include "calc_form.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Создаем объекты для форм логина и калькулятора
    Log_Form *log_form = new Log_Form(this);  // Создаем форму логина
    Calc_Form *calc_Form = new Calc_Form(this);  // Создаем форму калькулятора

    // Показываем только форму логина при запуске программы
    log_form->show();  // Показать форму логина

    // Когда логин успешен, скрываем логин и показываем калькулятор
    connect(log_form, &Log_Form::loginSuccess, [log_form, calc_Form]() {
        log_form->hide();  // Скрываем форму логина
        calc_Form->show();  // Показываем форму калькулятора
    });
}

MainWindow::~MainWindow()
{
}
