#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "results.h"
#include "burning.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static double bmr;
    static double bmi;
    static double calories;
    static double prot1;
    static double carb1;
    static double fat1;
    static double prot2;
    static double carb2;
    static double fat2;
    static QDate date;

private slots:


    void on_button_calculate_clicked();

    void on_actionSave_as_triggered();

    void on_combo_goal_currentIndexChanged(int index);

    void on_actionAbout_Creator_triggered();

    void on_actionAbout_program_triggered();

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionCalories_burning_triggered();

private:
    Ui::MainWindow *ui;
    QString file_path_;
    Results *result;
    Burning *burn;

};
#endif // MAINWINDOW_H
