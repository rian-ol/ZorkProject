#ifndef INTERACT_H
#define INTERACT_H

#include <QMainWindow>

namespace Ui {
class interact;
}

class interact : public QMainWindow
{
    Q_OBJECT

public:
    explicit interact(QWidget *parent = nullptr);
    ~interact();

private:
    Ui::interact *ui;
};

#endif // INTERACT_H
