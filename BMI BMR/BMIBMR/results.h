#ifndef RESULTS_H
#define RESULTS_H

#include <QDialog>

namespace Ui {
class Results;
}

class Results : public QDialog
{
    Q_OBJECT

public:
    explicit Results(QWidget *parent = nullptr);
    ~Results();

private slots:
    void on_button_save_clicked();


private:
    Ui::Results *ui;
};

#endif // RESULTS_H
