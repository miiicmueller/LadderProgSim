#include "mainprog.h"
#include "ui_mainprog.h"

MainProg::MainProg(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainProg)
{
    ui->setupUi(this);
}

MainProg::~MainProg()
{
    delete ui;
}
