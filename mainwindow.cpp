#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

QString n;
QString pressed_number;
QString tmp1,tmp2;
int add = 0;
int minus =0;
int multiply=0;
int divide=0;
int mod=0;
int equal = 0;
double sum;

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_equal_clicked()
{
   equal = 1; //change the status by pressing the equal sign once
    if(add == 1)//add
     {
          tmp2 = ui->label->text();
          sum = tmp1.toDouble() + tmp2.toDouble(); //convert characters to float
          if(sum == 0) //equal to 0
           {
                ui->label->setText("0");
           }
          ui->label->setText(QString::number(sum)); //Convert floating point to characters
          add=0;//reset the add, wait for next add
    }
    else if(minus == 1) //minus
    {
          tmp2 = ui->label->text();
          sum = tmp1.toDouble() - tmp2.toDouble();
          if(sum == 0) //equal to 0
           {
                 ui->label->setText("0");
           }
          ui->label->setText(QString::number(sum));
          minus=0;
    }
    else if(divide == 1) //divide
    {
           tmp2 = ui->label->text();
           sum = tmp1.toDouble() / tmp2.toDouble();
           if(sum == 0) //equal to 0
            {
                     ui->label->setText("0");
            }
           ui->label->setText(QString::number(sum));
           divide=0;
    }
    else if( multiply== 1) //mulitply
    {
           tmp2 = ui->label->text();
           sum = tmp1.toDouble() * tmp2.toDouble();
           if(sum == 0) //equal to 0
            {
                     ui->label->setText("0");
            }
           ui->label->setText(QString::number(sum));
           multiply=0;
    }
    else if(mod == 1) //percent
    {
           tmp2 = ui->label->text();
           n.clear();
           sum = tmp1.toInt() % tmp2.toInt();
           ui->label->setText(QString::number(sum));
           mod=0;
    }
}

void MainWindow::on_pushButton_0_clicked()
{
    pressed_number = ui->pushButton_0->text();
    n += pressed_number;
    ui->label->setText(n);//show empty status
}

void MainWindow::on_pushButton_1_clicked()
{
    pressed_number = ui->pushButton_1->text();
    n += pressed_number;
    ui->label->setText(n);
}

void MainWindow::on_pushButton_2_clicked()
{
    pressed_number = ui->pushButton_2->text();
    n += pressed_number;
    ui->label->setText(n);
}

void MainWindow::on_pushButton_3_clicked()
{
    pressed_number = ui->pushButton_3->text();
    n += pressed_number;
    ui->label->setText(n);
}

void MainWindow::on_pushButton_4_clicked()
{
    pressed_number = ui->pushButton_4->text();
    n += pressed_number;
    ui->label->setText(n);
}

void MainWindow::on_pushButton_5_clicked()
{
    pressed_number = ui->pushButton_5->text();
    n += pressed_number;
    ui->label->setText(n);
}

void MainWindow::on_pushButton_6_clicked()
{
    pressed_number = ui->pushButton_6->text();
    n += pressed_number;
    ui->label->setText(n);
}

void MainWindow::on_pushButton_7_clicked()
{
    pressed_number = ui->pushButton_7->text();
    n += pressed_number;
    ui->label->setText(n);
}

void MainWindow::on_pushButton_8_clicked()
{
    pressed_number = ui->pushButton_8->text();
    n += pressed_number;
    ui->label->setText(n);
}

void MainWindow::on_pushButton_9_clicked()
{
    pressed_number = ui->pushButton_9->text();
    n += pressed_number;
    ui->label->setText(n);
}

void MainWindow::on_pushButton_plus_clicked()
{
     add = 1;
     tmp1 = ui->label->text();//Get the characters that you entered earlier, save them temporarily
     n.clear();//clear number
     ui->label->setText(n);//show empty status
}

void MainWindow::on_pushButton_minus_clicked()
{
     minus = 1;
     tmp1 = ui->label->text();
     n.clear();
     ui->label->setText(n);
}

void MainWindow::on_pushButton_divide_clicked()
{
     divide = 1;
     tmp1 = ui->label->text();
     n.clear();
     ui->label->setText(n);
}

void MainWindow::on_pushButton_multiply_clicked()
{
     multiply = 1;
     tmp1 = ui->label->text();
     n.clear();
     ui->label->setText(n);
}

void MainWindow::on_pushButton_mod_clicked()
{
     mod = 1;
     tmp1 = ui->label->text();
     n.clear();
     ui->label->setText(n);
}
