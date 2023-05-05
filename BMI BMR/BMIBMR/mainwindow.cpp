#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "results.h"

#include <iostream>
#include <QApplication>
#include <QButtonGroup>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QtMath>
#include <QDate>
#include <QDateEdit>

    double MainWindow::bmr;
    double MainWindow::bmi;
    double MainWindow::calories;
    double MainWindow::prot1;
    double MainWindow::carb1;
    double MainWindow::fat1;
    double MainWindow::prot2;
    double MainWindow::carb2;
    double MainWindow::fat2;
    QDate MainWindow::date;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->check_set->setDisabled(true);
    ui->spin_weekly->setDisabled(true);
    ui->line_Gweight->setDisabled(true);
    file_path_ ="";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_calculate_clicked()
{
    date = QDate::currentDate();
    int days=0;
    double change=0,x,y;
    auto sex = 0;
    if (ui->radio_male->isChecked())
        sex = 1;
    if (ui->radio_female->isChecked())
        sex = 2;

    auto age = (ui->line_age->text()).toDouble();
    auto height = (ui->line_height->text()).toDouble();
    auto weight = (ui->line_weight->text()).toDouble();
    auto activity = ui->combo_activity->currentIndex();
    auto goal = ui->combo_goal->currentIndex();
    auto Gset = ui->check_set->isChecked();
    auto gweight = (ui->line_Gweight->text()).toDouble();
    auto weekly = ui->spin_weekly->value();
    auto formula = ui->combo_formula->currentIndex();

    if((age==0) || (height==0) || (weight==0) || (sex==0) || (activity==0) || (goal==0))
        QMessageBox::warning(this,"Missing data","There are empty boxes.\nFill them up!");
    else
    {
        if ((Gset==true)&&(((goal==1) && (gweight>weight))||(goal==3 && gweight<weight)))
        {
            QMessageBox::warning(this,"Incorrect data","Data does not match.");
            return;
        }
        if((age<18) || (age>100) || (height<120) ||(height>230) || (weight<30)|| (weight>150))
        {
            QMessageBox::warning(this,"Wrong values!","Fix your data or\nconsult a doctor for dietary advice.");
            return;
        }
        if(weekly>=0.5)
        {
            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "High weekly weight change", "Changing your weight so fast isn't healthy for you.\nContinue?",QMessageBox::Yes|QMessageBox::No);
            if (reply == QMessageBox::No)
                return;
        }

        if(formula==0) //Mifflin-St Jeor Equation
        {
            if(sex==1)
                bmr=10*weight + 6.25*height - 5*age + 5;
            else if(sex==2)
                bmr=10*weight + 6.25*height - 5*age - 161;
        }
        else if(formula==1) //Roza and Shizgal Equation
        {
            if(sex==1)
                bmr = 13.397*weight + 4.799*height - 5.677*age + 88.362;
            else if(sex==2)
                bmr = 9.247*weight + 3.098*height - 4.33*age + 447.593;
        }
        else if(formula==2) //Harris-Benedict Equation
        {
            if(sex==1)
                bmr = 66.47 + 13.76*weight + 5.003*height - 6.755*age;
            else if(sex==2)
                bmr = 655.1 + 9.563*weight + 1.85*height - 4.676*age;
        }

        switch(activity)
        {
            case 1:
                calories=bmr*1.2;
                break;
            case 2:
                calories=bmr*1.375;
                break;
            case 3:
                calories=bmr*1.55;
                break;
            case 4:
                calories=bmr*1.725;
                break;
            case 5:
                calories=bmr*1.9;
                break;
            default:
                break;
        }

        if(goal==1)
        {
            if(Gset==false)
                calories-=400;
            else if(Gset==true)
            {
                change=(weekly*7700)/7;
                calories-=change;
            }
            prot1=calories*0.1;
            prot2=calories*0.125;
            carb1=calories*0.025;
            carb2=calories*0.075;
            fat1=calories*(0.3/9);
            fat2=calories*(0.4/9);
        }
        else if(goal==3)
        {
            if(Gset==false)
                calories+=400;
            else if(Gset==true)
            {
                change=(weekly*7000)/7;
                calories+=change;
            }
            prot1=calories*0.0625;
            prot2=calories*0.0875;
            carb1=calories*0.075;
            carb2=calories*0.125;
            fat1=calories*(0.25/9);
            fat2=calories*(0.35/9);
        }

        prot1=calories*0.0625;
        prot2=calories*0.0875;
        carb1=calories*0.1;
        carb2=calories*0.15;
        fat1=calories*(0.15/9);
        fat2=calories*(0.25/9);

        days=(((qFabs(gweight-weight))/weekly)*7);
        date = date.addDays(days);

        x=height/100;
        y=qPow(x,2);
        bmi = weight/y;

        result = new Results(this);
        result->show();
    }
}

void MainWindow::on_actionOpen_triggered()
{
    QString filter = "Text file (*.txt)";
    QString file_name = QFileDialog::getOpenFileName(this, "Open file", "D:/Pliki/Il/Qt/BMI BMR/BMIBMR/files/", filter);
    QFile file(file_name);
    file_path_ = file_name;
    if(!file.open(QFile::ReadOnly | QFile::Text))
        QMessageBox::warning(this,"Error","Failed to open the file.");

    QTextStream in(&file);
    QString text = in.readLine();
    if(text=="male")
        ui->radio_male->setChecked(true);
    else if(text=="female")
        ui->radio_female->setChecked(true);
    else
    {
        QButtonGroup *buttonGroup = new QButtonGroup;
        buttonGroup->addButton(ui->radio_male);
        buttonGroup->addButton(ui->radio_female);
        buttonGroup->setExclusive(false);
        ui->radio_male->setChecked(false);
        ui->radio_female->setChecked(false);
        buttonGroup->setExclusive(true);
    }
    ui->line_age->setText(in.readLine());
    ui->line_weight->setText(in.readLine());
    ui->line_height->setText(in.readLine());
    ui->combo_activity->setCurrentIndex((in.readLine()).toInt());
    ui->combo_goal->setCurrentIndex((in.readLine()).toInt());
    text = in.readLine();
    if (text=="1")
    {
        ui->check_set->setChecked(true);
        ui->spin_weekly->setEnabled(true);
        ui->line_Gweight->setEnabled(true);
    }
    else
        ui->check_set->setChecked(false);

    ui->line_Gweight->setText(in.readLine());
    ui->spin_weekly->setValue((in.readLine()).toDouble());
    ui->combo_formula->setCurrentIndex((in.readLine()).toInt());

    file.close();
    ui->statusbar->showMessage("File has been opened.",2500);
}

void MainWindow::on_actionSave_as_triggered()
{
    QString filter = "Text file (*.txt)";
    QString file_name = QFileDialog::getSaveFileName(this, "Save file", "D:/Pliki/Il/Qt/BMI BMR/BMIBMR/files/", filter);
    QFile file(file_name);
    file_path_=file_name;
    if(!file.open(QFile::WriteOnly | QFile::Text))
        QMessageBox::warning(this,"Error","Failed to save the file.");

    QTextStream out(&file);
    QString text;
    if (ui->radio_male->isChecked())
        text = "male";
    if (ui->radio_female->isChecked())
        text = "female";

    out << text << "\n";
    out << (ui->line_age->text()) << "\n";
    out << (ui->line_weight->text()) << "\n";
    out << (ui->line_height->text()) << "\n";
    out << ui->combo_activity->currentIndex() << "\n";
    out << ui->combo_goal->currentIndex() << "\n";
    if(ui->check_set->isChecked())
        text="1";

    out << text << "\n";
    out << (ui->line_Gweight->text()) << "\n";
    out << (ui->spin_weekly->text()) << "\n";
    out << ui->combo_formula->currentIndex() << "\n";

    file.flush();
    file.close();
    ui->statusbar->showMessage("File has been saved.",2500);
}

void MainWindow::on_actionSave_triggered()
{
    QFile file(file_path_);
    if(!file.open(QFile::WriteOnly | QFile::Text))
        on_actionSave_as_triggered();

    QTextStream out(&file);
    QString text;
    if (ui->radio_male->isChecked())
        text = "male";
    if (ui->radio_female->isChecked())
        text = "female";

    out << text << "\n";
    out << (ui->line_age->text()) << "\n";
    out << (ui->line_weight->text()) << "\n";
    out << (ui->line_height->text()) << "\n";
    out << ui->combo_activity->currentIndex() << "\n";
    out << ui->combo_goal->currentIndex() << "\n";
    if(ui->check_set->isChecked())
        text="1";

    out << text << "\n";
    out << (ui->line_Gweight->text()) << "\n";
    out << (ui->spin_weekly->text()) << "\n";
    out << ui->combo_formula->currentIndex() << "\n";

    file.flush();
    file.close();
    ui->statusbar->showMessage("File has been saved.",2500);
}

void MainWindow::on_actionNew_triggered()
{
    file_path_ = "";
    QButtonGroup *buttonGroup = new QButtonGroup;
    buttonGroup->addButton(ui->radio_male);
    buttonGroup->addButton(ui->radio_female);
    buttonGroup->setExclusive(false);
    ui->radio_male->setChecked(false);
    ui->radio_female->setChecked(false);
    buttonGroup->setExclusive(true);

    ui->line_age->clear();
    ui->line_weight->clear();
    ui->line_height->clear();
    ui->combo_activity->setCurrentIndex(0);
    ui->combo_goal->setCurrentIndex(0);
    ui->check_set->setChecked(false);
    ui->spin_weekly->clear();
    ui->line_Gweight->clear();
    ui->combo_formula->setCurrentIndex(0);
    ui->statusbar->showMessage("New file has arrived!",2500);
}

void MainWindow::on_combo_goal_currentIndexChanged(int index)
{
    if(index==0 || index==2)
    {
        ui->check_set->setChecked(false);
        ui->check_set->setDisabled(true);
        ui->spin_weekly->setDisabled(true);
        ui->line_Gweight->setDisabled(true);
    }
    else if (index==1 || index==3)
        ui->check_set->setEnabled(true);
}

void MainWindow::on_actionAbout_Creator_triggered()
{
    QString about_text="Author:\t\tTomasz Libera\nCollege:\t\tAdam Mickiewicz University\nField of study:\tComputer technologies";
    QMessageBox::information(this,"About author",about_text);
}

void MainWindow::on_actionAbout_program_triggered()
{
    QString about_text="BMR - Basal Metabolic Rate.\nGive us information how many calories our body burn everyday.\n\nBMI - Body Mass Index\nInforms us about how healthy is our weight.";
    QMessageBox::information(this,"About program",about_text);
}

void MainWindow::on_actionCalories_burning_triggered()
{
    burn = new Burning(this);
    burn->show();
}
