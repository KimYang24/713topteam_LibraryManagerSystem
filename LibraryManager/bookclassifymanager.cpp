#include "bookclassifymanager.h"
#include "ui_bookclassifymanager.h"
#include "bookinformationmanageradddatadialog.h"

BookClassifyManager::BookClassifyManager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookClassifyManager)
{
    ui->setupUi(this);
    setWindowTitle("图书分类管理模块");
    setWinStyle();
}

BookClassifyManager::~BookClassifyManager()
{
    delete ui;
}

void BookClassifyManager::setWinStyle()
{
    ui->Title->setStyleSheet(
                "QLabel{"
                "background-color:#333333;"
                "color:white;"
                "}");
    ui->ReturnpushButton->setStyleSheet(   //正常状态样式
                "QPushButton{"
                "background-color:#222222;"
                "color:#DDDDDD;"
                "}"
                //鼠标悬停样式
                "QPushButton:hover{"
                "background-color:#444444;"
                "color:white;"
                "}");
    ui->AddpushButton->setStyleSheet(
                "QPushButton{"
                "background-color:#FFA500;"
                "border-radius:3px;"//设置圆角半径
                "color:white;"
                "}"
                "QPushButton:hover{"
                "background-color:#FF8C00;"
                "color:white;"
                "}");
    ui->SurepushButton->setStyleSheet(
                "QPushButton{"
                "background-color:#FF0000;"
                "border-radius:3px;"//设置圆角半径
                "color:white;"
                "}"
                "QPushButton:hover{"
                "background-color:#FF8C00;"
                "color:white;"
                "}");
    ui->CanclepushButton->setStyleSheet(
                "QPushButton{"
                "background-color:#8470FF;"
                "border-radius:3px;"//设置圆角半径
                "color:white;"
                "}"
                "QPushButton:hover{"
                "background-color:#FF8C00;"
                "color:white;"
                "}");
    ui->Manager->setStyleSheet(
                "QLabel{"
                "background-color:white;"
                "}");
    ui->DataWidget->setStyleSheet(
                "QWidget{"
                "background-color:white;"
                "}");
    ui->BookInformationManagerTitle->setStyleSheet(
                "QLabel{"
                "background-color:#DDDDDD;"
                "}");
}

void BookClassifyManager::on_AddpushButton_clicked()
{
    BookInformationManagerAddDataDialog BookInformationManagerAddDataDialog(this);
    BookInformationManagerAddDataDialog.exec();
}

