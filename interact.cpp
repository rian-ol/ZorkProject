#include "interact.h"
#include "ui_interact.h"

interact::interact(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::interact)
{
    ui->setupUi(this);
}

interact::~interact()
{
    delete ui;
}
