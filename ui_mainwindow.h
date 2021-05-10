/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bootTriggerButton;
    QComboBox *bootModeSelector;
    QProgressBar *progressBar;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *filePathEdit;
    QPushButton *searchPath;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comSelector;
    QPushButton *getStatus;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *protocolSelector;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *pageSizeSpin;
    QSpacerItem *verticalSpacer;
    QPushButton *flashButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        bootTriggerButton = new QPushButton(centralWidget);
        bootTriggerButton->setObjectName(QString::fromUtf8("bootTriggerButton"));
        bootTriggerButton->setAutoFillBackground(false);
        bootTriggerButton->setStyleSheet(QString::fromUtf8(""));
        bootTriggerButton->setCheckable(true);
        bootTriggerButton->setChecked(false);
        bootTriggerButton->setFlat(false);

        horizontalLayout_4->addWidget(bootTriggerButton);

        bootModeSelector = new QComboBox(centralWidget);
        bootModeSelector->addItem(QString());
        bootModeSelector->addItem(QString());
        bootModeSelector->setObjectName(QString::fromUtf8("bootModeSelector"));

        horizontalLayout_4->addWidget(bootModeSelector);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(100);
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);

        horizontalLayout_4->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout_4);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        filePathEdit = new QLineEdit(centralWidget);
        filePathEdit->setObjectName(QString::fromUtf8("filePathEdit"));

        horizontalLayout->addWidget(filePathEdit);

        searchPath = new QPushButton(centralWidget);
        searchPath->setObjectName(QString::fromUtf8("searchPath"));

        horizontalLayout->addWidget(searchPath);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        comSelector = new QComboBox(centralWidget);
        comSelector->setObjectName(QString::fromUtf8("comSelector"));
        comSelector->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_2->addWidget(comSelector);

        getStatus = new QPushButton(centralWidget);
        getStatus->setObjectName(QString::fromUtf8("getStatus"));

        horizontalLayout_2->addWidget(getStatus);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_3);

        protocolSelector = new QComboBox(centralWidget);
        protocolSelector->setObjectName(QString::fromUtf8("protocolSelector"));

        horizontalLayout_5->addWidget(protocolSelector);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        pageSizeSpin = new QSpinBox(centralWidget);
        pageSizeSpin->setObjectName(QString::fromUtf8("pageSizeSpin"));
        pageSizeSpin->setEnabled(true);
        pageSizeSpin->setMaximum(1024);
        pageSizeSpin->setValue(128);

        horizontalLayout_3->addWidget(pageSizeSpin);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        flashButton = new QPushButton(centralWidget);
        flashButton->setObjectName(QString::fromUtf8("flashButton"));

        verticalLayout->addWidget(flashButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setEnabled(false);
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        bootTriggerButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MEMO ECU Flasher", nullptr));
        bootTriggerButton->setText(QCoreApplication::translate("MainWindow", "Boot mode", nullptr));
        bootModeSelector->setItemText(0, QCoreApplication::translate("MainWindow", "Normal", nullptr));
        bootModeSelector->setItemText(1, QCoreApplication::translate("MainWindow", "Bridge", nullptr));

        filePathEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Path to *.hex flash file", nullptr));
        searchPath->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Select COM port:", nullptr));
        getStatus->setText(QCoreApplication::translate("MainWindow", "Get status", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Protocol:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Page size:", nullptr));
        flashButton->setText(QCoreApplication::translate("MainWindow", "Flash!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
