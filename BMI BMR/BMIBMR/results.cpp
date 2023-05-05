#include "results.h"
#include "ui_results.h"
#include "mainwindow.h"

#include <iostream>
#include <QApplication>
#include <QMessageBox>
#include <QTableWidget>
#include <QColor>
#include <QFile>
#include <QFileDialog>
#include <QPixmap>

QString cleaning(QString zero,int x)
{
    if(x==0 || x==2)
        if(zero.back() =='0')
            zero.chop(2);
    if(x==1)
        zero +=" kcal";
    else if(x==2)
        zero+=" g";
    else if(x==3)
        zero.chop(2);
    return zero;
}

Results::Results(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Results)
{
    ui->setupUi(this);

    ui->line_bmi->setText(cleaning(QString::number(MainWindow::bmi,'f',1),0));
    ui->line_meta->setText((cleaning(QString::number(MainWindow::bmr,'f',0),1)));
    ui->line_sum->setText(cleaning(QString::number(MainWindow::calories,'f',0),1));
    ui->line_protein->setText(cleaning(QString::number(MainWindow::prot1,'f',1),2));
    ui->line_fat->setText(cleaning(QString::number(MainWindow::fat1,'f',1),2));
    ui->line_carbs->setText(cleaning(QString::number(MainWindow::carb1,'f',1),2));
    ui->line_protein2->setText(cleaning(QString::number(MainWindow::prot2,'f',1),2));
    ui->line_fat2->setText(cleaning(QString::number(MainWindow::fat2,'f',1),2));
    ui->line_carbs2->setText(cleaning(QString::number(MainWindow::carb2,'f',1),2));
    ui->date_goal->setDate(MainWindow::date);

    auto bmi = MainWindow::bmi;

    if(bmi<18.5)
    {
        ui->table_bmi->item(0, 0)->setBackground(Qt::red);
        ui->table_bmi->item(0, 1)->setBackground(Qt::red);
    }
    else if(bmi>=18.5 && bmi<25)
    {
        ui->table_bmi->item(1, 0)->setBackground(Qt::green);
        ui->table_bmi->item(1, 1)->setBackground(Qt::green);
    }
    else if(bmi>=25 && bmi<30)
    {
        ui->table_bmi->item(2, 0)->setBackground(Qt::yellow);
        ui->table_bmi->item(2, 1)->setBackground(Qt::yellow);
    }
    else if(bmi>=30 && bmi<35)
    {
        ui->table_bmi->item(3, 0)->setBackground(Qt::red);
        ui->table_bmi->item(3, 1)->setBackground(Qt::red);
    }
    else if(bmi>=35)
    {
        ui->table_bmi->item(4, 0)->setBackground(Qt::darkRed);
        ui->table_bmi->item(4, 1)->setBackground(Qt::darkRed);
    }

    QPixmap image(":/rec/img/BMI.png");
    ui->label_image->setPixmap(image.scaled(325,325,Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

Results::~Results()
{
    delete ui;
}

void Results::on_button_save_clicked()
{
    QString filter = "Text file (*.txt)";
    QString file_name = QFileDialog::getSaveFileName(this, "Save file", "D:/Pliki/Il/Qt/BMI BMR/BMIBMR/results/", filter);
    QFile file(file_name);

    if(!file.open(QFile::WriteOnly | QFile::Text))
        QMessageBox::warning(this,"Error","Failed to save the file.");

    QTextStream out(&file);
    out << "Your results:" << "\n";
    out << "Metabolism:\t" << (ui->line_meta->text()) << "\n";
    out << "You should eat:\t" << (ui->line_sum->text()) << "\n\n";
    out << "Proteins:\t" << cleaning(ui->line_protein->text(),3)<< " - "<< (ui->line_protein2->text()) << "\n";
    out << "Fats:\t\t" << cleaning(ui->line_fat->text(),3) << " - " << (ui->line_fat2->text()) << "\n";
    out << "Carbohydrates:\t" << cleaning(ui->line_carbs->text(),3) << " - " << (ui->line_carbs2->text()) << "\n\n";
    out << "BMI:\t\t" << (ui->line_bmi->text()) << "\n\n";
    QDate date = ui->date_goal->date();
    out << "Goal achieved:\t" << date.toString("dd MMM yyyy");

    file.flush();
    file.close();
}
