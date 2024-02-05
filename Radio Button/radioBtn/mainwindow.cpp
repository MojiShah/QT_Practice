#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnFavorite_clicked()
{
    if(ui->yesRadioButton->isChecked())
        QMessageBox :: information(this,"Yes","خدا رو شکر. دایی عشق منه.");
    if(ui->noRadioButton->isChecked())
        QMessageBox :: information(this,"No","ای بااااباااا.");
}


void MainWindow::on_btnProgram_clicked()
{
    if(ui->cplusCheckBox->isChecked()==true && ui->pythonCheckBox->isChecked()==true)
        QMessageBox :: information(this,"","c++ & python");
    if(ui->cplusCheckBox->isChecked()==true && ui->pythonCheckBox->isChecked()==false)
        QMessageBox::information(this,"","C++");
    if(ui->cplusCheckBox->isChecked()==false && ui->pythonCheckBox->isChecked()==true)
        QMessageBox::information(this,"","python");
    if(ui->cplusCheckBox->isChecked()==false && ui->pythonCheckBox->isChecked()==false)
        QMessageBox::information(this,"","None.");

}

