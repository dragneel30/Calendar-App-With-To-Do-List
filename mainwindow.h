#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "dialog.h"
#include <QDate>

#include <QTimer>
#include "systemtray.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    struct todolist
    {
        QTime time;
        QDate date;
        QString todo;
        todolist(QTime t, const QDate& d, QString td )
                : time(t) ,date(d), todo(td) {}
    };

private:
    Ui::MainWindow *ui;
    std::vector<todolist> toDoList;
    QTimer timer;SystemTray s;
signals:
    void emitSignal(int);
private slots:
    void on_calendarWidget_activated(const QDate &date);
    void timeForAnEventEmitter();
    void timeForAnEvent(int);
};

#endif // MAINWINDOW_H
