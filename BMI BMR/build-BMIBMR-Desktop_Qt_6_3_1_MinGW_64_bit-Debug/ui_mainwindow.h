/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout_program;
    QAction *actionSave_as;
    QAction *actionAbout_Creator;
    QAction *actionCalories_burning;
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radio_male;
    QRadioButton *radio_female;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLineEdit *line_age;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *line_weight;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLineEdit *line_height;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QComboBox *combo_activity;
    QLabel *label_6;
    QComboBox *combo_goal;
    QCheckBox *check_set;
    QLabel *label_7;
    QLineEdit *line_Gweight;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_8;
    QDoubleSpinBox *spin_weekly;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_9;
    QComboBox *combo_formula;
    QPushButton *button_calculate;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOther;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(337, 423);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionAbout_program = new QAction(MainWindow);
        actionAbout_program->setObjectName(QString::fromUtf8("actionAbout_program"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_program->setIcon(icon);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/img/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon1);
        actionAbout_Creator = new QAction(MainWindow);
        actionAbout_Creator->setObjectName(QString::fromUtf8("actionAbout_Creator"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/img/aboutA.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Creator->setIcon(icon2);
        actionCalories_burning = new QAction(MainWindow);
        actionCalories_burning->setObjectName(QString::fromUtf8("actionCalories_burning"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/img/kcal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCalories_burning->setIcon(icon3);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/img/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon4);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rec/img/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon5);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rec/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radio_male = new QRadioButton(centralwidget);
        radio_male->setObjectName(QString::fromUtf8("radio_male"));

        horizontalLayout->addWidget(radio_male);

        radio_female = new QRadioButton(centralwidget);
        radio_female->setObjectName(QString::fromUtf8("radio_female"));

        horizontalLayout->addWidget(radio_female);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        line_age = new QLineEdit(centralwidget);
        line_age->setObjectName(QString::fromUtf8("line_age"));
        line_age->setMaxLength(3);

        gridLayout->addWidget(line_age, 1, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        line_weight = new QLineEdit(centralwidget);
        line_weight->setObjectName(QString::fromUtf8("line_weight"));
        line_weight->setMaxLength(3);

        gridLayout->addWidget(line_weight, 2, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 3, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        line_height = new QLineEdit(centralwidget);
        line_height->setObjectName(QString::fromUtf8("line_height"));
        line_height->setMaxLength(3);

        gridLayout->addWidget(line_height, 3, 1, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 3, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        combo_activity = new QComboBox(centralwidget);
        combo_activity->addItem(QString());
        combo_activity->addItem(QString());
        combo_activity->addItem(QString());
        combo_activity->addItem(QString());
        combo_activity->addItem(QString());
        combo_activity->addItem(QString());
        combo_activity->setObjectName(QString::fromUtf8("combo_activity"));

        gridLayout->addWidget(combo_activity, 4, 1, 1, 3);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        combo_goal = new QComboBox(centralwidget);
        combo_goal->addItem(QString());
        combo_goal->addItem(QString());
        combo_goal->addItem(QString());
        combo_goal->addItem(QString());
        combo_goal->setObjectName(QString::fromUtf8("combo_goal"));

        gridLayout->addWidget(combo_goal, 5, 1, 1, 3);

        check_set = new QCheckBox(centralwidget);
        check_set->setObjectName(QString::fromUtf8("check_set"));

        gridLayout->addWidget(check_set, 6, 0, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        line_Gweight = new QLineEdit(centralwidget);
        line_Gweight->setObjectName(QString::fromUtf8("line_Gweight"));
        line_Gweight->setMaxLength(3);

        gridLayout->addWidget(line_Gweight, 7, 1, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 7, 3, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        spin_weekly = new QDoubleSpinBox(centralwidget);
        spin_weekly->setObjectName(QString::fromUtf8("spin_weekly"));
        spin_weekly->setFrame(true);
        spin_weekly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spin_weekly->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spin_weekly->setDecimals(1);
        spin_weekly->setMaximum(5.000000000000000);
        spin_weekly->setSingleStep(0.100000000000000);

        gridLayout->addWidget(spin_weekly, 8, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 8, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 8, 3, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 9, 0, 1, 1);

        combo_formula = new QComboBox(centralwidget);
        combo_formula->addItem(QString());
        combo_formula->addItem(QString());
        combo_formula->addItem(QString());
        combo_formula->setObjectName(QString::fromUtf8("combo_formula"));

        gridLayout->addWidget(combo_formula, 9, 1, 1, 3);

        button_calculate = new QPushButton(centralwidget);
        button_calculate->setObjectName(QString::fromUtf8("button_calculate"));

        gridLayout->addWidget(button_calculate, 10, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 337, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOther = new QMenu(menubar);
        menuOther->setObjectName(QString::fromUtf8("menuOther"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        QWidget::setTabOrder(radio_male, radio_female);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuOther->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuOther->addAction(actionCalories_burning);
        menuOther->addAction(actionAbout_program);
        menuOther->addAction(actionAbout_Creator);
        toolBar->addSeparator();
        toolBar->addAction(actionNew);
        toolBar->addSeparator();
        toolBar->addAction(actionOpen);
        toolBar->addSeparator();
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionSave_as);
        toolBar->addSeparator();
        toolBar->addAction(actionCalories_burning);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(check_set, &QCheckBox::clicked, line_Gweight, &QLineEdit::setEnabled);
        QObject::connect(check_set, &QCheckBox::clicked, spin_weekly, &QDoubleSpinBox::setEnabled);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "BMR BMI Calculator", nullptr));
        actionAbout_program->setText(QCoreApplication::translate("MainWindow", "About program", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actionAbout_Creator->setText(QCoreApplication::translate("MainWindow", "About author", nullptr));
        actionCalories_burning->setText(QCoreApplication::translate("MainWindow", "Calories burning", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Sex", nullptr));
        radio_male->setText(QCoreApplication::translate("MainWindow", "Male", nullptr));
        radio_female->setText(QCoreApplication::translate("MainWindow", "Female", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Weight (kg)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Height (cm)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Activity per week", nullptr));
        combo_activity->setItemText(0, QCoreApplication::translate("MainWindow", "Choose your activity", nullptr));
        combo_activity->setItemText(1, QCoreApplication::translate("MainWindow", "None", nullptr));
        combo_activity->setItemText(2, QCoreApplication::translate("MainWindow", "1 time, light exercises", nullptr));
        combo_activity->setItemText(3, QCoreApplication::translate("MainWindow", "1 - 2 times, medium exercises", nullptr));
        combo_activity->setItemText(4, QCoreApplication::translate("MainWindow", "3 - 5 times, heavy exerciese", nullptr));
        combo_activity->setItemText(5, QCoreApplication::translate("MainWindow", "5+ times, super heavy exercises", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "Your goal", nullptr));
        combo_goal->setItemText(0, QCoreApplication::translate("MainWindow", "Choose your goal", nullptr));
        combo_goal->setItemText(1, QCoreApplication::translate("MainWindow", "Lose weight", nullptr));
        combo_goal->setItemText(2, QCoreApplication::translate("MainWindow", "Maintain weight", nullptr));
        combo_goal->setItemText(3, QCoreApplication::translate("MainWindow", "Gain weight", nullptr));

        check_set->setText(QCoreApplication::translate("MainWindow", "Set goal weight?", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Your goal weight", nullptr));
        line_Gweight->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Weekly weight change", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Formula type", nullptr));
        combo_formula->setItemText(0, QCoreApplication::translate("MainWindow", "Mifflin - St Jeor", nullptr));
        combo_formula->setItemText(1, QCoreApplication::translate("MainWindow", "Roza - Shizgal equation", nullptr));
        combo_formula->setItemText(2, QCoreApplication::translate("MainWindow", "Harris \342\200\223 Benedict equation", nullptr));

        button_calculate->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuOther->setTitle(QCoreApplication::translate("MainWindow", "Other", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
