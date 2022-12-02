#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logindialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    LoginDialog Login;
    Login.exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}

