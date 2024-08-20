#include "AboutBoxQt.h"
#include "ui_AboutBoxQt.h"

AboutBoxQt::AboutBoxQt(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutBoxQt)
{
    ui->setupUi(this);
    connect(ui->pushButtonClose,SIGNAL(clicked(bool)),this,SLOT(close()));
}

AboutBoxQt::~AboutBoxQt()
{
    delete ui;
}
