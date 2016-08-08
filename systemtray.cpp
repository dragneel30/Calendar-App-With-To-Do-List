#include "systemtray.h"



SystemTray::SystemTray(const QIcon &icon, QObject *parent)
    : QSystemTrayIcon(icon,parent),mess(),sound("C:\\Users\\Lorencepc\\Documents\\untitled8\\resource\\boxlow.wav")
{
    setIcon(icon);
    QObject::connect(this,SIGNAL(messageClicked()),this,SLOT(message()));
}

void SystemTray::setMess(const QString &value)
{
    mess = value;
}

void SystemTray::playSound()
{
    sound.play();
}

void SystemTray::message()
{
    notif.setText(mess);
    notif.exec();
}
