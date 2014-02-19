#ifndef WINDOWPARAMETERS_H
#define WINDOWPARAMETERS_H

#include <QDialog>

namespace Ui {
class WindowParameters;
}
class Parameters;

class WindowParameters : public QDialog
{
    Q_OBJECT
public:
    explicit WindowParameters( Parameters &, QWidget *parent = 0 );
    ~WindowParameters();

private slots:
    void saveParameters();

private:
    Ui::WindowParameters *ui;
    Parameters& mParameter;
};

#endif // WINDOWPARAMETERS_H
