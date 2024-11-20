/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QTextEdit *textEdit;
    QPushButton *pushButton2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 40, 211, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(350, 80, 113, 20));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 270, 81, 21));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 100, 121, 51));
        label_2->setFont(font);
        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(300, 150, 221, 111));
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::AllEditTriggers);
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(560, 60, 141, 161));
        pushButton2 = new QPushButton(Widget);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setGeometry(QRect(430, 270, 81, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\346\226\271\347\250\213\347\273\204\351\230\266\346\225\260n", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244n", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\346\226\271\347\250\213\347\273\204\347\237\251\351\230\265", nullptr));
        pushButton2->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244\347\237\251\351\230\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
