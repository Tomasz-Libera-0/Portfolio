/********************************************************************************
** Form generated from reading UI file 'burning.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BURNING_H
#define UI_BURNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Burning
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_10;
    QSpinBox *spin_num;
    QComboBox *combo_run;
    QLineEdit *time_run;
    QCheckBox *box_team;
    QCheckBox *box_home;
    QSpacerItem *horizontalSpacer_11;
    QCheckBox *box_run;
    QComboBox *combo_team;
    QLineEdit *time_home;
    QLineEdit *time_walk;
    QComboBox *combo_bike;
    QLineEdit *time_team;
    QCheckBox *box_lift;
    QLabel *label_9;
    QCheckBox *box_bike;
    QLabel *label_type;
    QComboBox *combo_walk;
    QLineEdit *time_bike;
    QCheckBox *box_swim;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_14;
    QCheckBox *box_walk;
    QLineEdit *time_swim;
    QLineEdit *line_burn;
    QLabel *label_time;
    QLineEdit *time_lift;
    QPushButton *pushButton;
    QLineEdit *line_weight;
    QLabel *label;

    void setupUi(QDialog *Burning)
    {
        if (Burning->objectName().isEmpty())
            Burning->setObjectName(QString::fromUtf8("Burning"));
        Burning->resize(359, 307);
        gridLayout = new QGridLayout(Burning);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_10 = new QSpacerItem(105, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 7, 1, 1, 2);

        spin_num = new QSpinBox(Burning);
        spin_num->setObjectName(QString::fromUtf8("spin_num"));
        spin_num->setMaximum(7);

        gridLayout->addWidget(spin_num, 0, 1, 1, 1);

        combo_run = new QComboBox(Burning);
        combo_run->addItem(QString());
        combo_run->addItem(QString());
        combo_run->addItem(QString());
        combo_run->addItem(QString());
        combo_run->setObjectName(QString::fromUtf8("combo_run"));

        gridLayout->addWidget(combo_run, 3, 1, 1, 2);

        time_run = new QLineEdit(Burning);
        time_run->setObjectName(QString::fromUtf8("time_run"));
        time_run->setMaxLength(3);

        gridLayout->addWidget(time_run, 3, 3, 1, 2);

        box_team = new QCheckBox(Burning);
        box_team->setObjectName(QString::fromUtf8("box_team"));

        gridLayout->addWidget(box_team, 5, 0, 1, 1);

        box_home = new QCheckBox(Burning);
        box_home->setObjectName(QString::fromUtf8("box_home"));

        gridLayout->addWidget(box_home, 8, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 8, 1, 1, 2);

        box_run = new QCheckBox(Burning);
        box_run->setObjectName(QString::fromUtf8("box_run"));

        gridLayout->addWidget(box_run, 3, 0, 1, 1);

        combo_team = new QComboBox(Burning);
        combo_team->addItem(QString());
        combo_team->addItem(QString());
        combo_team->addItem(QString());
        combo_team->addItem(QString());
        combo_team->setObjectName(QString::fromUtf8("combo_team"));

        gridLayout->addWidget(combo_team, 5, 1, 1, 2);

        time_home = new QLineEdit(Burning);
        time_home->setObjectName(QString::fromUtf8("time_home"));
        time_home->setMaxLength(3);

        gridLayout->addWidget(time_home, 8, 3, 1, 2);

        time_walk = new QLineEdit(Burning);
        time_walk->setObjectName(QString::fromUtf8("time_walk"));
        time_walk->setMaxLength(3);

        gridLayout->addWidget(time_walk, 2, 3, 1, 2);

        combo_bike = new QComboBox(Burning);
        combo_bike->addItem(QString());
        combo_bike->addItem(QString());
        combo_bike->addItem(QString());
        combo_bike->addItem(QString());
        combo_bike->addItem(QString());
        combo_bike->setObjectName(QString::fromUtf8("combo_bike"));

        gridLayout->addWidget(combo_bike, 4, 1, 1, 2);

        time_team = new QLineEdit(Burning);
        time_team->setObjectName(QString::fromUtf8("time_team"));
        time_team->setMaxLength(3);

        gridLayout->addWidget(time_team, 5, 3, 1, 2);

        box_lift = new QCheckBox(Burning);
        box_lift->setObjectName(QString::fromUtf8("box_lift"));

        gridLayout->addWidget(box_lift, 7, 0, 1, 1);

        label_9 = new QLabel(Burning);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 9, 0, 1, 1);

        box_bike = new QCheckBox(Burning);
        box_bike->setObjectName(QString::fromUtf8("box_bike"));

        gridLayout->addWidget(box_bike, 4, 0, 1, 1);

        label_type = new QLabel(Burning);
        label_type->setObjectName(QString::fromUtf8("label_type"));

        gridLayout->addWidget(label_type, 1, 1, 1, 1);

        combo_walk = new QComboBox(Burning);
        combo_walk->addItem(QString());
        combo_walk->addItem(QString());
        combo_walk->addItem(QString());
        combo_walk->setObjectName(QString::fromUtf8("combo_walk"));

        gridLayout->addWidget(combo_walk, 2, 1, 1, 2);

        time_bike = new QLineEdit(Burning);
        time_bike->setObjectName(QString::fromUtf8("time_bike"));
        time_bike->setMaxLength(3);

        gridLayout->addWidget(time_bike, 4, 3, 1, 2);

        box_swim = new QCheckBox(Burning);
        box_swim->setObjectName(QString::fromUtf8("box_swim"));

        gridLayout->addWidget(box_swim, 6, 0, 1, 1);

        label_11 = new QLabel(Burning);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(105, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 6, 1, 1, 2);

        box_walk = new QCheckBox(Burning);
        box_walk->setObjectName(QString::fromUtf8("box_walk"));

        gridLayout->addWidget(box_walk, 2, 0, 1, 1);

        time_swim = new QLineEdit(Burning);
        time_swim->setObjectName(QString::fromUtf8("time_swim"));
        time_swim->setMaxLength(3);

        gridLayout->addWidget(time_swim, 6, 3, 1, 2);

        line_burn = new QLineEdit(Burning);
        line_burn->setObjectName(QString::fromUtf8("line_burn"));
        line_burn->setReadOnly(true);

        gridLayout->addWidget(line_burn, 9, 1, 1, 2);

        label_time = new QLabel(Burning);
        label_time->setObjectName(QString::fromUtf8("label_time"));

        gridLayout->addWidget(label_time, 1, 3, 1, 2);

        time_lift = new QLineEdit(Burning);
        time_lift->setObjectName(QString::fromUtf8("time_lift"));
        time_lift->setMaxLength(3);

        gridLayout->addWidget(time_lift, 7, 3, 1, 2);

        pushButton = new QPushButton(Burning);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 9, 3, 1, 2);

        line_weight = new QLineEdit(Burning);
        line_weight->setObjectName(QString::fromUtf8("line_weight"));
        line_weight->setMaxLength(3);

        gridLayout->addWidget(line_weight, 0, 3, 1, 1);

        label = new QLabel(Burning);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        QWidget::setTabOrder(spin_num, line_weight);
        QWidget::setTabOrder(line_weight, box_walk);
        QWidget::setTabOrder(box_walk, combo_walk);
        QWidget::setTabOrder(combo_walk, time_walk);
        QWidget::setTabOrder(time_walk, box_run);
        QWidget::setTabOrder(box_run, combo_run);
        QWidget::setTabOrder(combo_run, time_run);
        QWidget::setTabOrder(time_run, box_bike);
        QWidget::setTabOrder(box_bike, combo_bike);
        QWidget::setTabOrder(combo_bike, time_bike);
        QWidget::setTabOrder(time_bike, box_team);
        QWidget::setTabOrder(box_team, combo_team);
        QWidget::setTabOrder(combo_team, time_team);
        QWidget::setTabOrder(time_team, box_swim);
        QWidget::setTabOrder(box_swim, time_swim);
        QWidget::setTabOrder(time_swim, box_lift);
        QWidget::setTabOrder(box_lift, time_lift);
        QWidget::setTabOrder(time_lift, box_home);
        QWidget::setTabOrder(box_home, time_home);
        QWidget::setTabOrder(time_home, line_burn);
        QWidget::setTabOrder(line_burn, pushButton);

        retranslateUi(Burning);

        QMetaObject::connectSlotsByName(Burning);
    } // setupUi

    void retranslateUi(QDialog *Burning)
    {
        Burning->setWindowTitle(QCoreApplication::translate("Burning", "Burning calories", nullptr));
        combo_run->setItemText(0, QString());
        combo_run->setItemText(1, QCoreApplication::translate("Burning", "8 km/h", nullptr));
        combo_run->setItemText(2, QCoreApplication::translate("Burning", "11 km/h", nullptr));
        combo_run->setItemText(3, QCoreApplication::translate("Burning", "16 km/h", nullptr));

        box_team->setText(QCoreApplication::translate("Burning", "Team sports", nullptr));
        box_home->setText(QCoreApplication::translate("Burning", "Home activities", nullptr));
        box_run->setText(QCoreApplication::translate("Burning", "Running", nullptr));
        combo_team->setItemText(0, QString());
        combo_team->setItemText(1, QCoreApplication::translate("Burning", "Basketball", nullptr));
        combo_team->setItemText(2, QCoreApplication::translate("Burning", "Football", nullptr));
        combo_team->setItemText(3, QCoreApplication::translate("Burning", "Tennis", nullptr));

        combo_bike->setItemText(0, QString());
        combo_bike->setItemText(1, QCoreApplication::translate("Burning", "16 km/h", nullptr));
        combo_bike->setItemText(2, QCoreApplication::translate("Burning", "16 - 19 km/h", nullptr));
        combo_bike->setItemText(3, QCoreApplication::translate("Burning", "19 - 22 km/h", nullptr));
        combo_bike->setItemText(4, QCoreApplication::translate("Burning", "22 - 26 km/h", nullptr));

        box_lift->setText(QCoreApplication::translate("Burning", "Weight lifting", nullptr));
        label_9->setText(QCoreApplication::translate("Burning", "Calories burn", nullptr));
        box_bike->setText(QCoreApplication::translate("Burning", "Bicycling", nullptr));
        label_type->setText(QCoreApplication::translate("Burning", "Type", nullptr));
        combo_walk->setItemText(0, QString());
        combo_walk->setItemText(1, QCoreApplication::translate("Burning", "3 km/h", nullptr));
        combo_walk->setItemText(2, QCoreApplication::translate("Burning", "5 km/h", nullptr));

        combo_walk->setPlaceholderText(QString());
        box_swim->setText(QCoreApplication::translate("Burning", "Swimming", nullptr));
        label_11->setText(QCoreApplication::translate("Burning", "Activities number", nullptr));
        box_walk->setText(QCoreApplication::translate("Burning", "Walking", nullptr));
        label_time->setText(QCoreApplication::translate("Burning", "Time (min)", nullptr));
        pushButton->setText(QCoreApplication::translate("Burning", "Calculate", nullptr));
        label->setText(QCoreApplication::translate("Burning", "Weight", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Burning: public Ui_Burning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BURNING_H
