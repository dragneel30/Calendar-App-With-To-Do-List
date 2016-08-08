#ifndef CALENDAR_H
#define CALENDAR_H

#include <QCalendarWidget>
#include <QMouseEvent>
class Calendar : public QCalendarWidget
{
    Q_OBJECT
public:
    Calendar(QWidget* parent = 0);
signals:
    void showToDoWindow(QDate d);
private:
    void mouseDoubleClickEvent(QMouseEvent* );

};

#endif // CALENDAR_H
