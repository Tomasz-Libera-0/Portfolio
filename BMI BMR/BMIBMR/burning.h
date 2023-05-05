#ifndef BURNING_H
#define BURNING_H

#include <QDialog>

namespace Ui {
class Burning;
}

class Burning : public QDialog
{
    Q_OBJECT

public:
    explicit Burning(QWidget *parent = nullptr);
    ~Burning();

private slots:
    void on_spin_num_valueChanged(int arg1);

    void on_box_walk_clicked(bool checked);

    void on_box_run_clicked(bool checked);

    void on_box_bike_clicked(bool checked);

    void on_box_team_clicked(bool checked);

    void on_box_swim_clicked(bool checked);

    void on_box_lift_clicked(bool checked);

    void on_box_home_clicked(bool checked);

    void on_pushButton_clicked();

private:
    Ui::Burning *ui;
    int x = 7;
    int arg = 0;
    int w,r,b,t,s,l,h;
};

#endif // BURNING_H
