#include "test.h"
#include <QMouseEvent>
Test::Test(QWidget *parent)
    :QLabel(parent)
{

}

void Test::mouseDoubleClickEvent(QMouseEvent *e)
{
    if ( e->button() == Qt::LeftButton )
        emit ss();
}


