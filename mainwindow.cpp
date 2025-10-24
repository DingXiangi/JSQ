#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn0,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btn1,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btn2,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btn3,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btn4,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btn5,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btn6,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btn7,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btn8,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btn9,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnNumClicked()
{
    QString str=ui->display->text();
    str+=qobject_cast<QPushButton *>(sender())->text();

    ui->display->setText(str);
    ui->statusbar->showMessage(qobject_cast<QPushButton*>(sender())->text() + "btn clicked");
}




void MainWindow::on_btnDian_clicked()
{
    QString str =ui->display->text();
    if(!str.contains("."))
        str +=qobject_cast<QPushButton*>(sender())->text();
    ui->display->setText(str);
}


void MainWindow::on_btnTuiwei_clicked()
{
    QString str =ui->display->text();
    str=str.left(str.length()-1);
    ui->display->setText(str);


}
