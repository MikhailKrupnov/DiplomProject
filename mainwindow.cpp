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

bool Findsignature (QFileInfo file){ // Функция поиска сигнатур в файлах
    qDebug() << file ;
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
    bool needsomedirects =  ui->AllFiles->isChecked();
    qDebug() << needsomedirects ;
    QDir directory = QDir("C:\\Users\\user\\Desktop");
    int filters = 0;

    if (needsomedirects == false) {
        filters = QDir::Files ;
    } else {
        filters = QDir::Files | QDir::AllDirs;
    }
    qDebug() << filters;
    qDebug() << directory;
    QFileInfoList list = directory.entryInfoList(static_cast<QDir::Filter>(filters)); // добавить фильтр по подпапкам !!!
    foreach (QFileInfo info, list) {
        Findsignature(info);
        //        qDebug() << needsomedirects ;

    }

}
