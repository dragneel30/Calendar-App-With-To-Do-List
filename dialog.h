#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDateTime>
#include <vector>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

    bool getCreated() const;

    QTime getTime() const;

    QString getTodo() const;

private slots:
    void on_make_clicked();

    void on_close_clicked();

private:

    Ui::Dialog *ui;
    QString todo;
    QTime time;

    bool created;

};

#endif // DIALOG_H
