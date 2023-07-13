/********************************************************************************
** Form generated from reading UI file 'program.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAM_H
#define UI_PROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_program
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QPushButton *selectFile;
    QLabel *label;
    QPushButton *programming;
    QLabel *label_2;
    QLabel *status;
    QLabel *programFileName;
    QPushButton *ok;
    QTextEdit *output;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *program)
    {
        if (program->objectName().isEmpty())
            program->setObjectName("program");
        program->resize(800, 600);
        centralwidget = new QWidget(program);
        centralwidget->setObjectName("centralwidget");
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(220, 0, 341, 31));
        QFont font;
        font.setPointSize(15);
        title->setFont(font);
        selectFile = new QPushButton(centralwidget);
        selectFile->setObjectName("selectFile");
        selectFile->setGeometry(QRect(210, 70, 75, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 70, 191, 21));
        programming = new QPushButton(centralwidget);
        programming->setObjectName("programming");
        programming->setGeometry(QRect(290, 130, 171, 51));
        programming->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 210, 49, 16));
        status = new QLabel(centralwidget);
        status->setObjectName("status");
        status->setGeometry(QRect(320, 210, 141, 16));
        status->setAlignment(Qt::AlignCenter);
        programFileName = new QLabel(centralwidget);
        programFileName->setObjectName("programFileName");
        programFileName->setGeometry(QRect(300, 70, 281, 21));
        programFileName->setAlignment(Qt::AlignCenter);
        ok = new QPushButton(centralwidget);
        ok->setObjectName("ok");
        ok->setGeometry(QRect(340, 240, 75, 24));
        output = new QTextEdit(centralwidget);
        output->setObjectName("output");
        output->setGeometry(QRect(250, 270, 251, 271));
        program->setCentralWidget(centralwidget);
        menubar = new QMenuBar(program);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        program->setMenuBar(menubar);
        statusbar = new QStatusBar(program);
        statusbar->setObjectName("statusbar");
        program->setStatusBar(statusbar);

        retranslateUi(program);

        QMetaObject::connectSlotsByName(program);
    } // setupUi

    void retranslateUi(QMainWindow *program)
    {
        program->setWindowTitle(QCoreApplication::translate("program", "program", nullptr));
        title->setText(QCoreApplication::translate("program", "STM32 Programmer Using ST-LinkV2", nullptr));
        selectFile->setText(QCoreApplication::translate("program", "Image", nullptr));
        label->setText(QCoreApplication::translate("program", "Select Image File you want to load", nullptr));
        programming->setText(QCoreApplication::translate("program", "Program", nullptr));
        label_2->setText(QCoreApplication::translate("program", "Status", nullptr));
        status->setText(QString());
        programFileName->setText(QString());
        ok->setText(QCoreApplication::translate("program", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class program: public Ui_program {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAM_H
