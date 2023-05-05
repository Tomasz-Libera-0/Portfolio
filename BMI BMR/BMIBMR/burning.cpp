#include "burning.h"
#include "ui_burning.h"

#include <iostream>
#include <QMessageBox>

Burning::Burning(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Burning)
{
    ui->setupUi(this);

    on_spin_num_valueChanged(0);
    on_box_walk_clicked(false);
    on_box_bike_clicked(false);
    on_box_run_clicked(false);
    on_box_team_clicked(false);
    on_box_swim_clicked(false);
    on_box_lift_clicked(false);
    on_box_home_clicked(false);
}

Burning::~Burning()
{
    delete ui;
}

void Burning::on_spin_num_valueChanged(int arg1)
{
    int sub;
    arg=arg1;
    if (x>arg)
    {
        sub = x-arg;
        if(h==1)
        {
            ui->box_home->setChecked(false);
            on_box_home_clicked(false);
            sub-=1;
            if(sub==0)
                return;
        }
        if(l==1)
        {
            ui->box_lift->setChecked(false);
            on_box_lift_clicked(false);
            sub-=1;
            if(sub==0)
                return;
        }
        if(s==1)
        {
            ui->box_swim->setChecked(false);
            on_box_swim_clicked(false);
            sub-=1;
            if(sub==0)
                return;
        }
        if(t==1)
        {
            ui->box_team->setChecked(false);
            on_box_team_clicked(false);
            sub-=1;
            if(sub==0)
                return;
        }
        if(b==1)
        {
            ui->box_bike->setChecked(false);
            on_box_bike_clicked(false);
            sub-=1;
            if(sub==0)
                return;
        }
        if(r==1)
        {
            ui->box_run->setChecked(false);
            on_box_run_clicked(false);
            sub-=1;
            if(sub==0)
                return;
        }
        if(w==1)
        {
            ui->box_walk->setChecked(false);
            on_box_walk_clicked(false);
            sub-=1;
            if(sub==0)
                return;
        }
    }
    else if(arg==0 || arg==x)
    {
        ui->box_home->setDisabled(true);
        ui->box_team->setDisabled(true);
        ui->box_lift->setDisabled(true);
        ui->box_run->setDisabled(true);
        ui->box_walk->setDisabled(true);
        ui->box_swim->setDisabled(true);
        ui->box_bike->setDisabled(true);
    }
    else if (arg>x)
    {
        ui->box_home->setEnabled(true);
        ui->box_team->setEnabled(true);
        ui->box_lift->setEnabled(true);
        ui->box_run->setEnabled(true);
        ui->box_walk->setEnabled(true);
        ui->box_swim->setEnabled(true);
        ui->box_bike->setEnabled(true);
    }
    if(w==1)
        ui->box_walk->setEnabled(true);
    if(r==1)
        ui->box_run->setEnabled(true);
    if(b==1)
        ui->box_bike->setEnabled(true);
    if(t==1)
        ui->box_team->setEnabled(true);
    if(s==1)
        ui->box_swim->setEnabled(true);
    if(l==1)
        ui->box_lift->setEnabled(true);
    if(h==1)
        ui->box_home->setEnabled(true);
}

void Burning::on_box_walk_clicked(bool checked)
{
    if(checked==true)
    {
        x+=1;
        w=1;
        ui->combo_walk->show();
        ui->time_walk->show();
    }
    else
    {
        x-=1;
        w=0;
        ui->time_walk->clear();
        ui->combo_walk->setCurrentIndex(0);
        ui->combo_walk->hide();
        ui->time_walk->hide();
    }
    on_spin_num_valueChanged(arg);
}

void Burning::on_box_run_clicked(bool checked)
{
    if(checked==true)
    {
        x+=1;
        r=1;
        ui->combo_run->show();
        ui->time_run->show();
    }
    else
    {
        x-=1;
        r=0;
        ui->time_run->clear();
        ui->combo_run->setCurrentIndex(0);
        ui->combo_run->hide();
        ui->time_run->hide();
    }
    on_spin_num_valueChanged(arg);
}

void Burning::on_box_bike_clicked(bool checked)
{
    if(checked==true)
    {
        x+=1;
        b=1;
        ui->combo_bike->show();
        ui->time_bike->show();
    }
    else
    {
        x-=1;
        b=0;
        ui->time_bike->clear();
        ui->combo_bike->setCurrentIndex(0);
        ui->combo_bike->hide();
        ui->time_bike->hide();
    }
    on_spin_num_valueChanged(arg);
}

void Burning::on_box_team_clicked(bool checked)
{
    if(checked==true)
    {
        x+=1;
        t=1;
        ui->combo_team->show();
        ui->time_team->show();
    }
    else
    {
        x-=1;
        t=0;
        ui->time_team->clear();
        ui->combo_team->setCurrentIndex(0);
        ui->combo_team->hide();
        ui->time_team->hide();
    }
    on_spin_num_valueChanged(arg);
}

void Burning::on_box_swim_clicked(bool checked)
{
    if(checked==true)
    {
        x+=1;
        s=1;
        ui->time_swim->show();
    }
    else
    {
        x-=1;
        s=0;
        ui->time_swim->clear();
        ui->time_swim->hide();
    }
    on_spin_num_valueChanged(arg);
}

void Burning::on_box_lift_clicked(bool checked)
{
    if(checked==true)
    {
        x+=1;
        l=1;
        ui->time_lift->show();
    }
    else
    {
        x-=1;
        l=0;
        ui->time_lift->clear();
        ui->time_lift->hide();
    }
    on_spin_num_valueChanged(arg);
}

void Burning::on_box_home_clicked(bool checked)
{
    if(checked==true)
    {
        x+=1;
        h=1;
        ui->time_home->show();
    }
    else
    {
        x-=1;
        h=0;
        ui->time_home->clear();
        ui->time_home->hide();
    }
    on_spin_num_valueChanged(arg);
}

void Burning::on_pushButton_clicked()
{
    double calories = 0,mets=0;
    auto twalk = (ui->time_walk->text()).toDouble();
    auto trun = (ui->time_run->text()).toDouble();
    auto tbike = (ui->time_bike->text()).toDouble();
    auto tteam = (ui->time_team->text()).toDouble();
    auto tswim = (ui->time_swim->text()).toDouble();
    auto tlift = (ui->time_lift->text()).toDouble();
    auto thome = (ui->time_home->text()).toDouble();
    auto cwalk = ui->combo_walk->currentIndex();
    auto crun = ui->combo_run->currentIndex();
    auto cbike = ui->combo_bike->currentIndex();
    auto cteam = ui->combo_team->currentIndex();
    auto bwalk = ui->box_walk->isChecked();
    auto brun = ui->box_run->isChecked();
    auto bbike = ui->box_bike->isChecked();
    auto bteam = ui->box_team->isChecked();
    auto bswim = ui->box_swim->isChecked();
    auto blift = ui->box_lift->isChecked();
    auto bhome = ui->box_home->isChecked();
    auto weight = (ui->line_weight->text()).toDouble();

    if(weight==0 || (bwalk==true &&( twalk==0 || cwalk==0))||(brun==true &&( trun==0 || crun==0))||(bbike==true &&( tbike==0 || cbike==0))||(bteam==true &&( tteam==0 || cteam==0))||(bswim==true && tswim==0)||(blift==true && tlift==0)||(bhome==true && thome==0))
        QMessageBox::warning(this,"Missing data","There are empty boxes.\nFill them up!");
    else
    {
        if(bwalk==true)
        {
            if(cwalk==1)
                mets=2;
            else if(cwalk==2)
                mets=4.5;

            calories+=((mets*3.5*weight)/200)*twalk;
        }
        if(brun==true)
        {
            if(crun==1)
                mets=8;
            else if(crun==2)
                mets=11.5;
            else if(crun==3)
                mets=16;
            calories+=((mets*3.5*weight)/200)*trun;
        }
        if(bbike==true)
        {
            if(cbike==1)
                mets=4;
            else if(cbike==2)
                mets=8;
            else if(cbike==3)
                mets=10;
            else if(cbike==4)
                mets=12;
            calories+=((mets*3.5*weight)/200)*tbike;
        }
        if(bteam==true)
        {
            if(cteam==1)
                mets=6;
            else if(cteam==2)
                mets=8;
            else if(cteam==3)
                mets=7;
            calories+=((mets*3.5*weight)/200)*tteam;
        }
        if(bswim==true)
        {
            mets=7;
            calories+=((mets*3.5*weight)/200)*tswim;
        }
        if(blift==true)
        {
            mets=6;
            calories+=((mets*3.5*weight)/200)*tlift;
        }
        if(bhome==true)
        {
            mets=2.5;
            calories+=((mets*3.5*weight)/200)*thome;
        }
        ui->line_burn->setText(QString("%0").arg(calories));
    }
}
