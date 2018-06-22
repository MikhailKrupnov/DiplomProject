/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *selectDirectory;
    QCheckBox *recursive;
    QPushButton *scanButton;
    QTextEdit *textEdit;
    QLabel *pathLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(450, 425);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        selectDirectory = new QPushButton(centralWidget);
        selectDirectory->setObjectName(QStringLiteral("selectDirectory"));

        horizontalLayout->addWidget(selectDirectory);

        recursive = new QCheckBox(centralWidget);
        recursive->setObjectName(QStringLiteral("recursive"));

        horizontalLayout->addWidget(recursive);

        scanButton = new QPushButton(centralWidget);
        scanButton->setObjectName(QStringLiteral("scanButton"));

        horizontalLayout->addWidget(scanButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 3, 0, 1, 1);

        pathLabel = new QLabel(centralWidget);
        pathLabel->setObjectName(QStringLiteral("pathLabel"));

        gridLayout->addWidget(pathLabel, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 450, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(selectDirectory, recursive);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SignatureScanner", Q_NULLPTR));
        selectDirectory->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \320\232\320\260\321\202\320\260\320\273\320\276\320\263\320\260", Q_NULLPTR));
        recursive->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\272\321\203\321\200\321\201\320\270\320\262\320\275\320\276", Q_NULLPTR));
        scanButton->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\260\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
        pathLabel->setText(QApplication::translate("MainWindow", "Directory not selected", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
