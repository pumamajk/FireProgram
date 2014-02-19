#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "parameters.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow( QWidget *parent = 0 );
    ~MainWindow();
    void setParameters( const Parameters& );

private:
    Ui::MainWindow *ui;
    Parameters mParameters;
};

#endif // MAINWINDOW_H
