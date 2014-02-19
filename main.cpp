#include "parameters.h"
#include "windowparameters.h"
#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Parameters parameter;
    WindowParameters windowParameters( parameter );
    MainWindow mainWindow;

    if (!windowParameters.exec())
    {
        mainWindow.setParameters( parameter );

        qDebug() << "Niesamowite Pola parameters po wykonaniu windowParameters"
                 << parameter.mFire;

        mainWindow.show();
    }
        return a.exec();
}
