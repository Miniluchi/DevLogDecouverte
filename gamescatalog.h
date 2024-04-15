#ifndef GAMESCATALOG_H
#define GAMESCATALOG_H

#include "QtNetwork/qnetworkrequest.h"
#include <QMainWindow>

namespace Ui {
class GamesCatalog;
}

class GamesCatalog : public QMainWindow
{
    Q_OBJECT

public:
    explicit GamesCatalog(QWidget *parent = nullptr);
    ~GamesCatalog();

private:
    Ui::GamesCatalog *ui;
    QNetworkRequest request;
};

#endif // GAMESCATALOG_H
