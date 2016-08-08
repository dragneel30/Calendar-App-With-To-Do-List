#ifndef SYSTEMTRAY_H
#define SYSTEMTRAY_H

#include <QSystemTrayIcon>
#include "notification.h"
#include <QString>
#include <QLabel>
#include <QSound>

class SystemTray : public QSystemTrayIcon
{
    Q_OBJECT
public:
    SystemTray(const QIcon & icon, QObject * parent = 0);
    void setMess(const QString &value);

    void playSound();
private:
    QIcon trayicon;
    QString mess;
    Notification notif;
    QSound sound;
private slots:
    void message();


};

#endif // SYSTEMTRAY_H
