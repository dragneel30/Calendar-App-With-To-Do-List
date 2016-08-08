#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDir>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),toDoList(),timer(), s(QIcon("C:\\Users\\Lorencepc\\Documents\\untitled8\\resource\\systemtrayicon.png"),this)
{
    ui->setupUi(this);
    QObject::connect(ui->calendarWidget,SIGNAL(showToDoWindow(QDate)),this,SLOT(on_calendarWidget_activated(QDate)));
    QObject::connect(&timer,SIGNAL(timeout()),this,SLOT(timeForAnEventEmitter()));
    QObject::connect(this,SIGNAL(emitSignal(int)),this,SLOT(timeForAnEvent(int)));
    timer.start(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_calendarWidget_activated(const QDate &date)
{
    if ( date < QDate::currentDate() )
        ui->invalidator->setText("Cant create to do list from this date, please select present<br> or future date!");
    else
    {
        Dialog todo(this);
        todo.exec();
        qDebug() << todo.getCreated();
        if ( todo.getCreated() )
            toDoList.emplace_back(todo.getTime(),date,todo.getTodo());
    }
}

void MainWindow::timeForAnEventEmitter()
{
    for ( int a = 0; a < toDoList.size(); a++ )
    {
        if ( QTime::currentTime() >= toDoList[a].time && QDate::currentDate() >= toDoList[a].date )
        {
            emit emitSignal(a);
        }
    }
}

void MainWindow::timeForAnEvent(int index)
{
    s.show();
    s.showMessage("Event","You have an event today!",QSystemTrayIcon::MessageIcon::Information,10000);
    s.playSound();
    s.setMess(toDoList[index].todo);
    toDoList.erase(toDoList.begin()+index);
}
