#ifndef LOG_FORM_H
#define LOG_FORM_H

#include <QWidget>

namespace Ui {
class Log_Form;
}

class Log_Form : public QWidget
{
    Q_OBJECT  // Не забудь добавить этот макрос для работы с сигналами и слотами

public:
    explicit Log_Form(QWidget *parent = nullptr);
    ~Log_Form();

signals:
    void loginSuccess();

private slots:
    void on_LoginButton_clicked();

private:
    Ui::Log_Form *ui;
};

#endif
