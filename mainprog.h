#ifndef MAINPROG_H
#define MAINPROG_H

#include <QMainWindow>

namespace Ui {
class MainProg;
}

class MainProg : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainProg(QWidget *parent = 0);
    ~MainProg();
    
private:
    Ui::MainProg *ui;
};

#endif // MAINPROG_H
