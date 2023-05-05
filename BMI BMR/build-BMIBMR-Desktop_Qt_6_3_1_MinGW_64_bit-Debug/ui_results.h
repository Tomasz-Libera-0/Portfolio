/********************************************************************************
** Form generated from reading UI file 'results.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTS_H
#define UI_RESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Results
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_image;
    QLabel *label;
    QLineEdit *line_meta;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *line_sum;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_3;
    QLineEdit *line_protein;
    QLineEdit *line_protein2;
    QLabel *label_4;
    QLineEdit *line_fat;
    QLineEdit *line_fat2;
    QLabel *label_5;
    QLineEdit *line_carbs;
    QLineEdit *line_carbs2;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QTableWidget *table_bmi;
    QLabel *label_7;
    QLineEdit *line_bmi;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_6;
    QDateEdit *date_goal;
    QSpacerItem *verticalSpacer_3;
    QPushButton *button_save;

    void setupUi(QDialog *Results)
    {
        if (Results->objectName().isEmpty())
            Results->setObjectName(QString::fromUtf8("Results"));
        Results->resize(572, 463);
        gridLayout = new QGridLayout(Results);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_6 = new QSpacerItem(208, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 0, 1, 1, 3);

        label_image = new QLabel(Results);
        label_image->setObjectName(QString::fromUtf8("label_image"));

        gridLayout->addWidget(label_image, 0, 4, 11, 1);

        label = new QLabel(Results);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 2);

        line_meta = new QLineEdit(Results);
        line_meta->setObjectName(QString::fromUtf8("line_meta"));
        line_meta->setReadOnly(true);

        gridLayout->addWidget(line_meta, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        label_2 = new QLabel(Results);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        line_sum = new QLineEdit(Results);
        line_sum->setObjectName(QString::fromUtf8("line_sum"));
        line_sum->setReadOnly(true);

        gridLayout->addWidget(line_sum, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        verticalSpacer_5 = new QSpacerItem(208, 22, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 3, 1, 1, 3);

        label_9 = new QLabel(Results);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 4, 2, 1, 1);

        label_8 = new QLabel(Results);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 4, 3, 1, 1);

        label_3 = new QLabel(Results);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        line_protein = new QLineEdit(Results);
        line_protein->setObjectName(QString::fromUtf8("line_protein"));
        line_protein->setReadOnly(true);

        gridLayout->addWidget(line_protein, 5, 2, 2, 1);

        line_protein2 = new QLineEdit(Results);
        line_protein2->setObjectName(QString::fromUtf8("line_protein2"));

        gridLayout->addWidget(line_protein2, 5, 3, 2, 1);

        label_4 = new QLabel(Results);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 2, 1);

        line_fat = new QLineEdit(Results);
        line_fat->setObjectName(QString::fromUtf8("line_fat"));
        line_fat->setReadOnly(true);

        gridLayout->addWidget(line_fat, 7, 2, 1, 1);

        line_fat2 = new QLineEdit(Results);
        line_fat2->setObjectName(QString::fromUtf8("line_fat2"));

        gridLayout->addWidget(line_fat2, 7, 3, 1, 1);

        label_5 = new QLabel(Results);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 8, 0, 1, 2);

        line_carbs = new QLineEdit(Results);
        line_carbs->setObjectName(QString::fromUtf8("line_carbs"));
        line_carbs->setReadOnly(true);

        gridLayout->addWidget(line_carbs, 8, 2, 1, 1);

        line_carbs2 = new QLineEdit(Results);
        line_carbs2->setObjectName(QString::fromUtf8("line_carbs2"));

        gridLayout->addWidget(line_carbs2, 8, 3, 1, 1);

        verticalSpacer_8 = new QSpacerItem(208, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 9, 1, 1, 3);

        verticalSpacer_7 = new QSpacerItem(208, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 10, 1, 2, 3);

        table_bmi = new QTableWidget(Results);
        if (table_bmi->columnCount() < 2)
            table_bmi->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_bmi->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_bmi->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (table_bmi->rowCount() < 5)
            table_bmi->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_bmi->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_bmi->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_bmi->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_bmi->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_bmi->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_bmi->setItem(0, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_bmi->setItem(0, 1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table_bmi->setItem(1, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table_bmi->setItem(1, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table_bmi->setItem(2, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table_bmi->setItem(2, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        table_bmi->setItem(3, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        table_bmi->setItem(3, 1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        table_bmi->setItem(4, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        table_bmi->setItem(4, 1, __qtablewidgetitem16);
        table_bmi->setObjectName(QString::fromUtf8("table_bmi"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(table_bmi->sizePolicy().hasHeightForWidth());
        table_bmi->setSizePolicy(sizePolicy);
        table_bmi->setMinimumSize(QSize(240, 0));
        table_bmi->setMaximumSize(QSize(240, 16777215));
        table_bmi->setAutoFillBackground(true);
        table_bmi->setFrameShape(QFrame::VLine);
        table_bmi->setFrameShadow(QFrame::Sunken);
        table_bmi->setMidLineWidth(1);
        table_bmi->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_bmi->setAlternatingRowColors(true);
        table_bmi->setCornerButtonEnabled(true);

        gridLayout->addWidget(table_bmi, 11, 4, 6, 1);

        label_7 = new QLabel(Results);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 12, 1, 1, 1);

        line_bmi = new QLineEdit(Results);
        line_bmi->setObjectName(QString::fromUtf8("line_bmi"));
        line_bmi->setReadOnly(true);

        gridLayout->addWidget(line_bmi, 12, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(79, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 12, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(208, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 13, 1, 1, 3);

        label_6 = new QLabel(Results);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 14, 0, 1, 2);

        date_goal = new QDateEdit(Results);
        date_goal->setObjectName(QString::fromUtf8("date_goal"));
        date_goal->setReadOnly(true);
        date_goal->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(date_goal, 14, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(208, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 15, 1, 1, 3);

        button_save = new QPushButton(Results);
        button_save->setObjectName(QString::fromUtf8("button_save"));

        gridLayout->addWidget(button_save, 16, 0, 1, 2);

        QWidget::setTabOrder(line_meta, line_sum);
        QWidget::setTabOrder(line_sum, line_protein);
        QWidget::setTabOrder(line_protein, line_protein2);
        QWidget::setTabOrder(line_protein2, line_fat);
        QWidget::setTabOrder(line_fat, line_fat2);
        QWidget::setTabOrder(line_fat2, line_carbs);
        QWidget::setTabOrder(line_carbs, line_carbs2);
        QWidget::setTabOrder(line_carbs2, line_bmi);
        QWidget::setTabOrder(line_bmi, date_goal);
        QWidget::setTabOrder(date_goal, button_save);
        QWidget::setTabOrder(button_save, table_bmi);

        retranslateUi(Results);

        QMetaObject::connectSlotsByName(Results);
    } // setupUi

    void retranslateUi(QDialog *Results)
    {
        Results->setWindowTitle(QCoreApplication::translate("Results", "BMR BMI Results", nullptr));
        label_image->setText(QString());
        label->setText(QCoreApplication::translate("Results", "Metabolism", nullptr));
        label_2->setText(QCoreApplication::translate("Results", "You should eat", nullptr));
        label_9->setText(QCoreApplication::translate("Results", "Min", nullptr));
        label_8->setText(QCoreApplication::translate("Results", "Max", nullptr));
        label_3->setText(QCoreApplication::translate("Results", "Proteins", nullptr));
        label_4->setText(QCoreApplication::translate("Results", "Fats", nullptr));
        label_5->setText(QCoreApplication::translate("Results", "Carbohydrates", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_bmi->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Results", "BMI", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_bmi->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Results", "Category", nullptr));

        const bool __sortingEnabled = table_bmi->isSortingEnabled();
        table_bmi->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = table_bmi->item(0, 0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Results", "<18.5", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_bmi->item(0, 1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Results", "Underweight", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_bmi->item(1, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Results", "18.5-25", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_bmi->item(1, 1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Results", "Normal", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table_bmi->item(2, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Results", "25-30", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = table_bmi->item(2, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Results", "Overweight", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = table_bmi->item(3, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Results", "30-35", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = table_bmi->item(3, 1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Results", "Obese", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = table_bmi->item(4, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Results", ">35", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = table_bmi->item(4, 1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Results", "Extremely obese", nullptr));
        table_bmi->setSortingEnabled(__sortingEnabled);

        label_7->setText(QCoreApplication::translate("Results", "BMI", nullptr));
        label_6->setText(QCoreApplication::translate("Results", "Goal achieved", nullptr));
        button_save->setText(QCoreApplication::translate("Results", "Save results", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Results: public Ui_Results {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTS_H
