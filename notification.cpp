#include "notification.h"
#include "ui_notification.h"

Notification::Notification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Notification)
{
    ui->setupUi(this);
}

Notification::~Notification()
{
    delete ui;
}

void Notification::setText(QString text)
{
    ui->message->setText(text);
}


