/********************************************************************************
** Form generated from reading UI file 'flightshooting.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHTSHOOTING_H
#define UI_FLIGHTSHOOTING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlightShooting
{
public:
    QWidget *centralwidget;
    QPushButton *start_btn;
    QPushButton *close_btn;
    QLabel *score;
    QGraphicsView *graphicsView;
    QPushButton *pause_btn;

    void setupUi(QMainWindow *FlightShooting)
    {
        if (FlightShooting->objectName().isEmpty())
            FlightShooting->setObjectName("FlightShooting");
        FlightShooting->resize(684, 575);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        FlightShooting->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/game.png"), QSize(), QIcon::Normal, QIcon::Off);
        FlightShooting->setWindowIcon(icon);
        centralwidget = new QWidget(FlightShooting);
        centralwidget->setObjectName("centralwidget");
        start_btn = new QPushButton(centralwidget);
        start_btn->setObjectName("start_btn");
        start_btn->setGeometry(QRect(600, 20, 71, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(17);
        start_btn->setFont(font1);
        close_btn = new QPushButton(centralwidget);
        close_btn->setObjectName("close_btn");
        close_btn->setGeometry(QRect(600, 460, 71, 31));
        close_btn->setFont(font1);
        score = new QLabel(centralwidget);
        score->setObjectName("score");
        score->setGeometry(QRect(600, 70, 71, 31));
        score->setAlignment(Qt::AlignmentFlag::AlignCenter);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(10, 10, 581, 551));
        pause_btn = new QPushButton(centralwidget);
        pause_btn->setObjectName("pause_btn");
        pause_btn->setGeometry(QRect(600, 120, 71, 31));
        pause_btn->setFont(font1);
        FlightShooting->setCentralWidget(centralwidget);

        retranslateUi(FlightShooting);

        QMetaObject::connectSlotsByName(FlightShooting);
    } // setupUi

    void retranslateUi(QMainWindow *FlightShooting)
    {
        FlightShooting->setWindowTitle(QCoreApplication::translate("FlightShooting", "FlightShooting", nullptr));
        start_btn->setText(QCoreApplication::translate("FlightShooting", "start", nullptr));
        close_btn->setText(QCoreApplication::translate("FlightShooting", "close", nullptr));
        score->setText(QCoreApplication::translate("FlightShooting", "\345\210\206\346\225\260: 0", nullptr));
        pause_btn->setText(QCoreApplication::translate("FlightShooting", "pause", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlightShooting: public Ui_FlightShooting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHTSHOOTING_H
