#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <QByteArray>
#include <QBuffer>
#include <QImage>
#include <QPixmap>
#include <sstream>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QByteArray Image_To_Base64(QString ImgPath);	//参数是图片路径
    QPixmap Base64_To_Image(QByteArray bytearray,QString SavePath);	//参数1是Base64码， 参数2是转换后的图片保存路径

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
