#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>


class Notepad : public QWidget
{
    Q_OBJECT
public:
    Notepad();

private slots:
    void quit();

private:
    QTextEdit *textEdit;
    QPushButton *quitButton;

};

#endif // NOTEPAD_H
