#ifndef DATASTORE_H
#define DATASTORE_H
#include <QObject>

class DataStore : public QObject
{
    Q_OBJECT
public:
    explicit DataStore(QObject *parent = 0) ;
signals:
    void increaseOne(QString ms);
public slots:
    void callMeFromQml();
private:
    int count;
    QString msg;
};
#endif // DATASTORE_H
