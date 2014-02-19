#include "windowparameters.h"
#include "ui_windowparameters.h"
#include "parameters.h"

WindowParameters::WindowParameters( Parameters & parameter, QWidget *parent ) :
    QDialog( parent ),
    ui( new Ui::WindowParameters ),
    mParameter( parameter )
{
    ui->setupUi( this );
    connect( ui->pushButton, SIGNAL(clicked()),this, SLOT(saveParameters()) );
}

WindowParameters::~WindowParameters()
{
    delete ui;
}

void WindowParameters::saveParameters()
{
    mParameter.mSizeField = ui->sizeField->text().toInt();
    mParameter.mNumberFirefighters = ui->numberFirefighters->text().toInt();
    mParameter.mNumberBlackPole = ui->numberBlackPole->text().toInt();
    mParameter.mFirefighterFactor = ui->fireFighterFactor->text().toInt();
    mParameter.mFireFactor = ui->fireFactor->text().toInt();
    mParameter.mFire = ui->fire->text().toInt();
    close();
}
