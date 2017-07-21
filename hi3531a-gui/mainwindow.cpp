#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::CustomizeWindowHint);
    this->setMaximumSize(1920,1080);
    this->resize(1920,1080);
 //   ui->wid_Configure->hide();
//    ui->wid_Configure->setWindowFlags(Qt::SplashScreen);

    connect(ui->btn_ChaConsole,SIGNAL(clicked(bool)),this,SLOT(slotShowChaConsole()),Qt::QueuedConnection);
    connect(ui->btn_Educontrol,SIGNAL(clicked(bool)),this,SLOT(slotShowEducontrol()),Qt::QueuedConnection);
    connect(ui->btn_NetRecord,SIGNAL(clicked(bool)),this,SLOT(slotShowNetRecord()),Qt::QueuedConnection);
    connect(ui->btn_VidPlayback,SIGNAL(clicked(bool)),this,SLOT(slotShowVidPlayback()),Qt::QueuedConnection);
    connect(ui->btn_Live,SIGNAL(clicked(bool)),this,SLOT(slotShowLive()),Qt::QueuedConnection);
    connect(ui->btn_CamConfigur,SIGNAL(clicked(bool)),this,SLOT(slotShowCamConfigur()),Qt::QueuedConnection);
    connect(ui->btn_AudConfigur,SIGNAL(clicked(bool)),this,SLOT(slotShowAudConfigur()),Qt::QueuedConnection);
    connect(ui->btn_GuiConfigur,SIGNAL(clicked(bool)),this,SLOT(slotShowGuiConfigur()),Qt::QueuedConnection);
    connect(ui->btn_DisManagement,SIGNAL(clicked(bool)),this,SLOT(slotShowDisManagement()),Qt::QueuedConnection);
    connect(ui->btn_SysConfigur,SIGNAL(clicked(bool)),this,SLOT(slotShowSysConfigur()),Qt::QueuedConnection);

}


void MainWindow::slotShowChaConsole()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::slotShowEducontrol()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}

void MainWindow::slotShowNetRecord()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}


void MainWindow::slotShowVidPlayback()
{
    ui->stackedWidget_2->setCurrentIndex(3);
}


void MainWindow::slotShowLive()
{
    ui->stackedWidget_2->setCurrentIndex(4);
}

void MainWindow::slotShowCamConfigur()
{
    ui->stackedWidget_2->setCurrentIndex(5);
}

void MainWindow::slotShowAudConfigur()
{
    ui->stackedWidget_2->setCurrentIndex(6);
}

void MainWindow::slotShowGuiConfigur()
{
    ui->stackedWidget_2->setCurrentIndex(7);
}



void MainWindow::slotShowDisManagement()
{
    ui->stackedWidget_2->setCurrentIndex(8);
}


void MainWindow::slotShowSysConfigur()
{
    ui->stackedWidget_2->setCurrentIndex(9);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
  qDebug()<<"event->x()"<<event->x();
}

bool MainWindow::event(QEvent *event)
{
 //   qDebug()<<"event:"<<event->type();
    if(event->type()==QEvent::HoverMove)
    {
        if(static_cast<QHoverEvent*>(event)->pos().x()==0)
        {
            ui->wid_Configure->move(0,0);
            ui->wid_Configure->show();
        }
    }
    return QMainWindow::event(event);
}
