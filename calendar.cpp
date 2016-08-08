#include "calendar.h"

Calendar::Calendar(QWidget *parent)
    :QCalendarWidget(parent)
{

}

void Calendar::mouseDoubleClickEvent(QMouseEvent *e)
{
    if ( e->button() == Qt::LeftButton )
        emit showToDoWindow(QDate());
}

