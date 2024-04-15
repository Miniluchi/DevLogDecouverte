#include "gamescatalog.h"
#include "ui_gamescatalog.h"
#include "QtNetwork/QNetworkAccessManager"
#include "QtNetwork/QNetworkReply"
#include "QJsonArray"
#include "QJsonObject"


GamesCatalog::GamesCatalog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GamesCatalog)
{
    setWindowTitle("Catalogue de jeux");
    ui->setupUi(this);

    QNetworkAccessManager *manager = new QNetworkAccessManager();
    QObject::connect(manager, &QNetworkAccessManager::finished,
                     this, [=](QNetworkReply *reply) {
                         if (reply->error()) {
                             qDebug() << reply->errorString();
                             return;
                         }

                         QString answer = reply->readAll();

                         qDebug() << answer;
                     }
                     );

    request.setUrl(QUrl("https://api.rawg.io/api/games"));
    manager->get(request);
}

GamesCatalog::~GamesCatalog()
{
    delete ui;
}
