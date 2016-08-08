#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <QDialog>
#include <QSound>

namespace Ui {
class Notification;
}

class Notification : public QDialog
{
    Q_OBJECT

public:
    explicit Notification(QWidget *parent = 0);
    ~Notification();
    void setText(QString);
private:
    Ui::Notification *ui;


};

#endif // NOTIFICATION_H
