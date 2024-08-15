#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "dialogabout.h" // Not mandatory if in the .h

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    fenetre = new DialogAbout(this);

    //Action close on button leave
    //To Do if needed

    //Action call new windows with an executable
    connect(ui->actionAbout,SIGNAL(triggered(bool)),this,SLOT(About()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void WindowsAbout::About()
void MainWindow::About()
{
    //Active only one of the three line below
    //DialogAbout *fenetre = new DialogAbout(this);
    //fenetre->exec();  // for blocking dialogue
    fenetre->show();    // for a non-blocking dialogue
}
