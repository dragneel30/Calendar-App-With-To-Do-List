#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog),todo(),created(false)
{
    ui->setupUi(this);
    ui->time->setTime(QTime::currentTime());
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_make_clicked()
{
    if ( !ui->todo->toPlainText().isEmpty() )
    {
        todo = ui->todo->toPlainText();
        time.setHMS(ui->time->time().hour(),ui->time->time().minute(),ui->time->time().second());
        created = true;
        this->close();
    }
    else
        ui->invalidator->setText("Event cannot be empty!");
}

void Dialog::on_close_clicked()
{
    this->close();
}

QString Dialog::getTodo() const
{
    return todo;
}

QTime Dialog::getTime() const
{
    return time;
}

bool Dialog::getCreated() const
{
    return created;
}

