/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QTextEdit *matrixTextEdit;
    QTextEdit *solutionTextEdit;
    QLabel *label_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(400, 300);
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 70, 131, 51));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        matrixTextEdit = new QTextEdit(Form);
        matrixTextEdit->setObjectName("matrixTextEdit");
        matrixTextEdit->setGeometry(QRect(30, 120, 151, 161));
        solutionTextEdit = new QTextEdit(Form);
        solutionTextEdit->setObjectName("solutionTextEdit");
        solutionTextEdit->setGeometry(QRect(210, 130, 171, 151));
        label_2 = new QLabel(Form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 90, 111, 16));
        label_2->setFont(font);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "\350\256\241\347\256\227\347\273\223\346\236\234\344\270\272", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\347\256\200\345\214\226\347\237\251\351\230\265\344\270\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
