#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pathLabel->setText(parentDir);
}

MainWindow::~MainWindow()
{

}

void MainWindow::printMessage(const QString &aMessage, bool aBold)
{ // This function outputs message to UI
    ui->textEdit->append(aBold?QString("<b>%1</b>").arg(aMessage):aMessage);
}

bool MainWindow::findSignature (const QFileInfo &qFileInfo)
{ // This function scans file for signatures ""
   printMessage(QString("----Scanning file %1").arg(qFileInfo.fileName()));
   QString path = qFileInfo.filePath();
   QFile file(path);
   QByteArray data;
   if (!file.open(QIODevice::ReadOnly)){
       qDebug() << "Not open" << file.isOpen();
       qDebug() << file.fileName();
       return false;

   }

   data = file.readAll();
    qDebug() << QString(data);

    // magic by Misha

//    return true;
}

void MainWindow::scanFilesList (const QFileInfoList &aList)
{
    for (const auto &file : aList ) {
        if (true == findSignature(file)) {
            printMessage(QString("Signatures found in %1").arg(file.fileName()), true);
        }
    }
}

quint64 MainWindow::scanDirectory (const QString &aPath, bool aRecursive)
{
    quint64 filesScanedCount = 0;
    printMessage(QString("--Scanning directory %1").arg(aPath));
    QFileInfoList infoList = QDir(aPath).entryInfoList(QDir::Files | QDir::NoDotAndDotDot);
    scanFilesList(infoList);
    filesScanedCount += infoList.size();
    
    if (aRecursive) {
        QStringList subDirs = QDir(aPath).entryList(QDir::AllDirs | QDir::NoDotAndDotDot);
        for (const auto & path : subDirs) {
            filesScanedCount += scanDirectory (aPath + "/" + path, aRecursive);
        }
    }

    return filesScanedCount;
}

void MainWindow::on_selectDirectory_clicked()
{
    parentDir = QFileDialog::getExistingDirectory(this, "Выберите диреторию", parentDir);
    ui->pathLabel->setText(parentDir);
}

void MainWindow::on_scanButton_clicked()
{
    ui->textEdit->clear();
    bool recursive =  ui->recursive->isChecked();
    quint64 filesScanedCount = scanDirectory(parentDir, recursive);
    printMessage("");
    printMessage(QString("Scanned %1 files").arg(filesScanedCount), true);
}
