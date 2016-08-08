#ifndef TEST_H
#define TEST_H

#include <QLabel>

class Test : public QLabel
{
    Q_OBJECT
public:
    Test(QWidget* parent = 0);
signals:
    void ss();
protected:
    void mouseDoubleClickEvent(QMouseEvent*);
};

#endif // TEST_H
