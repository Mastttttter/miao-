/********************************************************************************
** Form generated from reading UI file 'miao.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIAO_H
#define UI_MIAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_miao
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QWidget *miao)
    {
        if (miao->objectName().isEmpty())
            miao->setObjectName("miao");
        miao->resize(400, 300);
        layoutWidget = new QWidget(miao);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 90, 194, 78));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        formLayout->setWidget(2, QFormLayout::SpanningRole, pushButton);


        retranslateUi(miao);

        QMetaObject::connectSlotsByName(miao);
    } // setupUi

    void retranslateUi(QWidget *miao)
    {
        miao->setWindowTitle(QCoreApplication::translate("miao", "miao", nullptr));
        label->setText(QCoreApplication::translate("miao", "pre string", nullptr));
        label_2->setText(QCoreApplication::translate("miao", "after string", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("miao", "\345\226\265~", nullptr));
        pushButton->setText(QCoreApplication::translate("miao", "sent to cliboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class miao: public Ui_miao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIAO_H
