#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void  MainWindow::InitTableView()
{

//    {
//      TableViewColumn
////       TableView{
////           TableViewColumn{ role: "title"  ; title: "Title" ; width: 100 }
////              TableViewColumn{ role: "author" ; title: "Author" ; width: 200 }
////              model: libraryModel
//    }
}

void  MainWindow::UpDataTableResult()
{

}

MainWindow::~MainWindow()
{
    delete ui;
}
