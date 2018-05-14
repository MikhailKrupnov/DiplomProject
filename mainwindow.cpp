#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDir"
#include "QFile"
#include "QFileInfo"
#include "QDebug"
#include <QtGui>
#include "QString"
#include "QFileDialog"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

bool findSignature (const QFileInfo &aFileInfo)
{ // Функция поиска сигнатур в файлах
    qDebug() << aFileInfo;
    return true;
}

MainWindow::~MainWindow()
{

}

void MainWindow::on_addcatalog_clicked()
{
    QString dialog = QFileDialog::getOpenFileName(this, tr("Open File"));
}

void MainWindow::on_pushButton_clicked()
{
    bool parseSubDirectories =  ui->AllFiles->isChecked();
    QDir directory = QDir(parentDir);
    int filters = QDir::Files | QDir::NoDotAndDotDot;

    if (parseSubDirectories) {
        filters = filters | QDir::AllDirs;
    }
    
    QFileInfoList list = directory.entryInfoList(static_cast<QDir::Filter>(filters));
    
    for (const QFileInfo &info : list) {
        findSignature(info);
    }

}
