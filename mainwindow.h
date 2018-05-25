#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileInfoList>
#include <QDir>
#include <QFile>
#include <QDebug>
#include <QFileDialog>
#include <QByteArray>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void printMessage(const QString &aMessage, bool aBold = false);
    bool findSignature (const QFileInfo &qFileInfo);
    void scanFilesList (const QFileInfoList &aList);
    quint64 scanDirectory(const QString &aPath, bool aRecursive);
    bool findSignature();
private slots:
    
    void on_selectDirectory_clicked();

    void on_scanButton_clicked();

private:
    Ui::MainWindow *ui;
    QString parentDir = "C/Users/user/Desktop";
};

#endif // MAINWINDOW_H
