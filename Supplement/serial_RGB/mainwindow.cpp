#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QtWidgets>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    arduino_is_available =false;
    arduino_port_name = "" ;

    arduino = new QSerialPort;
    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
        if(serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()){
            if(serialPortInfo.vendorIdentifier() == arduino_uno_vendor_id){
              if(serialPortInfo.productIdentifier()==arduino_uno_product_id){
                  arduino_port_name=serialPortInfo.portName();
                  arduino_is_available=true;
              }
            }
        }
    }

    if(arduino_is_available){
        //open and configure the serialport
        arduino->setPortName(arduino_port_name);
        arduino->open(QSerialPort::WriteOnly);
        arduino->setBaudRate(QSerialPort::Baud9600);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        arduino->setFlowControl(QSerialPort::NoFlowControl);


    }else{
        //give error message if not available
        QMessageBox::warning(this,"Port error", "Couldn't find the Arduino");
    }
}

MainWindow::~MainWindow()
{
    if(arduino->isOpen()){
        arduino->close();
    }
    delete ui;

    /*
    qDebug() <<"Number of available ports:"<<QSerialPortInfo::availablePorts().length();
    foreach (const QSerialPortInfo &SerialPortInfo, QSerialPortInfo::availablePorts()) {
        qDebug() <<"Has Vendor ID"<< SerialPortInfo.hasVendorIdentifier();
        if(SerialPortInfo.hasVendorIdentifier()){
            qDebug()<<"Vendor ID:"<< SerialPortInfo.vendorIdentifier();
        }

        qDebug() <<"Has Product ID"<< SerialPortInfo.hasProductIdentifier();
        if(SerialPortInfo.hasProductIdentifier()){
            qDebug()<<"Product ID:"<< SerialPortInfo.productIdentifier();
        }


    }*/
}

void MainWindow::on_redslider_valueChanged(int value)
{

    ui->redvaluelabel->setText(QString("<span style=\" font-size:16pt; font-weight:600;\">%1</span>").arg(value));
    MainWindow::updateRGB(QString("r%1").arg(value));
    qDebug()<<value;

}

void MainWindow::on_greenslider_valueChanged(int value)
{
    ui->greenvaluelabel->setText(QString("<span style=\" font-size:16pt; font-weight:600;\">%1</span>").arg(value));
    MainWindow::updateRGB(QString("g%1").arg(value));
    qDebug()<<value;

}

void MainWindow::on_blueslider_valueChanged(int value)
{
    ui->bluevaluelabel->setText(QString("<span style=\" font-size:16pt; font-weight:600;\">%1</span>").arg(value));
    MainWindow::updateRGB(QString("b%1").arg(value));
    qDebug()<<value;

}

void MainWindow::updateRGB(QString command)
{
    if(arduino->isWritable()) {
        arduino->write(command.toStdString().c_str());
    }else{
        qDebug()<<"Couldn't write to serial";
    }
}
