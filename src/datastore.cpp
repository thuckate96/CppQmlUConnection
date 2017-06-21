#include "datastore.h"
#include <QDebug>

DataStore::DataStore(QObject *parent):QObject(parent), count(0), msg("%1 hits"){
    msg.arg(count);
}

void DataStore::callMeFromQml(){
    qDebug("Inside callMeFromQml()");
    count ++;
    emit increaseOne(msg.arg(count));
}
