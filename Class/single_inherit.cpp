/// Mainwindow.h


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlDatabase>
#include<QDebug>
#include<QSqlQuery>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_button_clicked();

    void on_sign_up_button_clicked();

    void on_sign_back_button_clicked();

    void on_go_to_sign_clicked();

    void on_pushButton_clicked();

    void on_back_clicked();

    void on_search_in_selection_clicked();

    void on_A1_clicked();

    void on_A2_clicked();

    void on_B1_clicked();

    void on_B2_clicked();

    void on_C1_clicked();

    void on_C2_clicked();

    void on_D1_clicked();

    void on_D2_clicked();

    void on_E1_clicked();

    void on_E2_clicked();

    void on_F1_clicked();

    void on_F2_clicked();

    void on_G1_clicked();

    void on_G2_clicked();

    void on_H1_clicked();

    void on_H2_clicked();

    void on_I1_clicked();

    void on_I2_clicked();

    void on_J1_clicked();

    void on_J2_clicked();

    void on_K1_clicked();

    void on_K2_clicked();

    void on_L1_clicked();

    void on_L2_clicked();

    void on_Payment_button_clicked();



    void on_ticket_download_clicked();

    void on_back_page_5_clicked();

    void on_back_page_0_clicked();

    void on_p1_back_clicked();

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_timeEdit_userTimeChanged(const QTime &time);


    void on_close_button_clicked();

    void on_close_button_2_clicked();

    void on_gotoaboutus_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QString email , password,sign_email,sign_password,sign_confirm_password,name_sign,contact_sign,seat_name,seat_number;
    QSqlDatabase db;
    int f[30],cnt=0;
};
#endif // MAINWINDOW_H



/// Main.cpp

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}




/// Main Window.cpp

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QDateEdit>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QPixmap pix("D:/zz.jpg");
    //ui->bus_label_17->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));

    //ui->bus_signlabel_17->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));

    //ui->selection_buslabel_19->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));

    //ui->ticket_bus_pic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));




    ///Database connect
    db= QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E:/Music/cseproject/DB.db");

    db.open();
/*
    db1= QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("E:/Music/cseproject/seat.db");
    db1.open();

*/

    ui->stackedWidget->setCurrentIndex(3);
    qDebug()<<db.isOpen();
}

MainWindow::~MainWindow()
{
    delete ui;
    db.close();
}


void MainWindow::on_login_button_clicked()
{
    email=ui->email_input->text();
    password= ui->password_input->text();

    QSqlQuery q1;
    q1.exec("SELECT * FROM usernew WHERE email = '"+email+"' AND password = '"+password+"' ");

    if(q1.next())
    {
        //QMessageBox::about(this,"Log IN","Succesfully Logged In");
        ui->stackedWidget->setCurrentIndex(4);
    }
    else{QMessageBox::warning(this,"Log IN","ERROR! Your email and Password does not match");}
    ui-> email_input->clear();
    ui-> password_input->clear();

    /*if(email==sign_email&&password==sign_confirm_password&&email!=""&&password!="")
    {
        QMessageBox::about(this,"Log IN","Succesfully Logged In");

        ui->stackedWidget->setCurrentIndex(4);
    }*/
}

void MainWindow::on_sign_up_button_clicked()
{
    name_sign=ui->name->text();
    sign_email = ui->signup_email_input->text();
    sign_password = ui->signup_password_input->text();
    sign_confirm_password = ui->signup_confirm_password_input->text();
    contact_sign= ui->mobile->text();


    if(sign_password==sign_confirm_password&&sign_email!=""&&sign_password!=""&&sign_confirm_password!="")
    {
    QSqlQuery q2;
    q2.exec("INSERT INTO usernew (name,email,password,contact) VALUES ('"+name_sign+"','"+sign_email+"','"+sign_password+"','"+contact_sign+"')");
    //QMessageBox::about(this,"Sign Up","Succesfully Signed Up");
    ui->stackedWidget->setCurrentIndex(3);
    ui->name->clear();
    ui->signup_email_input->clear();
    ui->signup_password_input->clear();
    ui->signup_confirm_password_input->clear();
    ui->mobile->clear();
    }
    else
    {
         QMessageBox::warning(this,"Sign Up","your password does not match");
    }


}


void MainWindow::on_sign_back_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_go_to_sign_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_search_in_selection_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    QSqlQuery q3;
    q3.exec("SELECT * FROM seat WHERE bookedd='yes' ");

    while(q3.next())
    {
         QString bookedseat;
         bookedseat = q3.value(1).toString();
         if(bookedseat == "A1")
         {
             ui->A1->setStyleSheet("background-color: red");
             f[0]=1;
         }
         else if(bookedseat == "A2")
         {
             ui->A2->setStyleSheet("background-color: red");
             f[1]=1;
         }
         else if(bookedseat == "B1")
         {
             ui->B1->setStyleSheet("background-color: red");
             f[2]=1;
         }
         else if(bookedseat == "B2")
         {
             ui->B2->setStyleSheet("background-color: red");
             f[3]=1;
         }
         else if(bookedseat == "C1")
         {
             ui->C1->setStyleSheet("background-color: red");
             f[4]=1;
         }
         else if(bookedseat == "C2")
         {
             ui->C2->setStyleSheet("background-color: red");
             f[5]=1;
         }
         else if(bookedseat == "D1")
         {
             ui->D1->setStyleSheet("background-color: red");
             f[6]=1;
         }
         else if(bookedseat == "D2")
         {
             ui->D2->setStyleSheet("background-color: red");
             f[7]=1;
         }
         else if(bookedseat == "E1")
         {
             ui->E1->setStyleSheet("background-color: red");
             f[8]=1;
         }
         else if(bookedseat == "E2")
         {
             ui->E2->setStyleSheet("background-color: red");
             f[9]=1;
         }
         else if(bookedseat == "F1")
         {
             ui->F1->setStyleSheet("background-color: red");
             f[10]=1;
         }
         else if(bookedseat == "F2")
         {
             ui->F2->setStyleSheet("background-color: red");
             f[11]=1;
         }
         else if(bookedseat == "G1")
         {
             ui->G1->setStyleSheet("background-color: red");
             f[12]=1;
         }
         else if(bookedseat == "G2")
         {
             ui->G2->setStyleSheet("background-color: red");
             f[13]=1;
         }
         else if(bookedseat == "H1")
         {
             ui->H1->setStyleSheet("background-color: red");
             f[14]=1;
         }
         else if(bookedseat == "H2")
         {
             ui->H2->setStyleSheet("background-color: red");
             f[15]=1;
         }
         else if(bookedseat == "I1")
         {
             ui->I1->setStyleSheet("background-color: red");
             f[16]=1;
         }
         else if(bookedseat == "I2")
         {
             ui->I2->setStyleSheet("background-color: red");
             f[17]=1;
         }
         else if(bookedseat == "J1")
         {
             ui->J1->setStyleSheet("background-color: red");
             f[18]=1;
         }
         else if(bookedseat == "J2")
         {
             ui->J2->setStyleSheet("background-color: red");
             f[19]=1;
         }
         else if(bookedseat == "K1")
         {
             ui->K1->setStyleSheet("background-color: red");
             f[20]=1;
         }
         else if(bookedseat == "K2")
         {
             ui->K2->setStyleSheet("background-color: red");
             f[21]=1;
         }
         else if(bookedseat == "L1")
         {
             ui->L1->setStyleSheet("background-color: red");
             f[22]=1;
         }
         else if(bookedseat == "L2")
         {
             ui->L2->setStyleSheet("background-color: red");
             f[23]=1;
         }


    }
}


void MainWindow::on_A1_clicked()
{

    if(f[0]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->A1->setStyleSheet("background-color: yellow");
          QSqlQuery q4;
          seat_number="A1";
        QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }

}


void MainWindow::on_A2_clicked()
{
    if(f[1]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->A2->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="A2";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_B1_clicked()
{
    if(f[2]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->B1->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="B1";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_B2_clicked()
{
    if(f[3]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->B2->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="B2";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_C1_clicked()
{
    if(f[4]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->C1->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="C1";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_C2_clicked()
{
    if(f[5]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->C2->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="C2";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_D1_clicked()
{
    if(f[6]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->D1->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="D1";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_D2_clicked()
{
    if(f[7]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->D2->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="D2";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_E1_clicked()
{
    if(f[8]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->E1->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="E1";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_E2_clicked()
{
    if(f[9]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->E2->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="E2";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_F1_clicked()
{
    if(f[10]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->F1->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="F1";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_F2_clicked()
{
    if(f[11]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->F2->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="F2";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_G1_clicked()
{
    if(f[12]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->G1->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="G1";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_G2_clicked()
{
    if(f[13]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->G2->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="G2";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_H1_clicked()
{
    if(f[14]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->H1->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="H1";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_H2_clicked()
{
    if(f[15]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->H2->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="H2";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_I1_clicked()
{
    if(f[16]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->I1->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="I1";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_I2_clicked()
{
    if(f[17]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->I2->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="I2";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_J1_clicked()
{
    if(f[18]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->J1->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="J1";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_J2_clicked()
{
    if(f[19]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->J2->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="J2";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_K1_clicked()
{
    if(f[20]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->K1->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="K1";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_K2_clicked()
{
    if(f[21]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->K2->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="K2";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_L1_clicked()
{
    if(f[22]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->L1->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="L1";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
          cnt++;

    }
}


void MainWindow::on_L2_clicked()
{
    if(f[23]==1)
    {
         QMessageBox::about(this,"Sorry","This seat is Already Booked , Select Another");

    }
    else{
         ui->L2->setStyleSheet("background-color: yellow");
         QSqlQuery q4;
         seat_number="L2";
         QString booked="yes";
         q4.exec("INSERT INTO seat (email,seatno,bookedd) VALUES ('"+email+"','"+seat_number+"','"+booked+"')");
         cnt++;

    }
}


void MainWindow::on_Payment_button_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
    cnt*=1200;
     ui->amount_to_paid->setText(QString::number(cnt));  /// amount to be paid for tickets selected
}



void MainWindow::on_ticket_download_clicked()
{
     int amount;
     amount = ui->payment_amount->text().toInt();
 if(amount==cnt)
 {
    ui->stackedWidget->setCurrentIndex(1);
     QSqlQuery ticket_query;
    ticket_query.exec("SELECT * FROM seat WHERE email = '"+email+"' ");
     if(ticket_query.next())
    {
         ui->ticket_email->setText(ticket_query.value(0).toString());
         ui->ticket_seatno->setText(ticket_query.value(1).toString());

    }

     QString payment_mobile_number;

    payment_mobile_number=ui->payment_mobile_2->text();
     ui->Ticket_mobile->setText(payment_mobile_number);

    QString From1;
     From1=ui->from->currentText();
    ui->ticket_from->setText(From1);  /// from where in ticket

     QString To1;
     To1=ui->to->currentText();
     ui->Ticket_to->setText(To1);  /// To where in ticket

     QString AC1;
     AC1=ui->AC_NON->currentText();
     ui->ticket_Ac->setText(AC1);  /// AC or Non Ac bus in ticket

     QString Bus1;
     Bus1=ui->BUS_NON->currentText();
     ui->ticket_bus->setText(Bus1);  /// Bus Name  in ticket

   }
     else
     {
       QMessageBox::warning(this,"Payment Canceled","Please Pay the Given Amount");
     }
}


void MainWindow::on_back_page_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_back_page_0_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_p1_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_dateEdit_userDateChanged(const QDate &date)
{
    QString date1;
    date1=ui->dateEdit->text();
     ui->Ticket_date->setText(date1); // ticket date print
}



void MainWindow::on_timeEdit_userTimeChanged(const QTime &time)
{
     QString time1;
     time1=ui->timeEdit->text();
     ui->Ticket_time->setText(time1); // ticket time print
}





void MainWindow::on_close_button_clicked()
{
     this->close();
}


void MainWindow::on_close_button_2_clicked()
{
     this->close();
}


void MainWindow::on_gotoaboutus_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}





void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

////
