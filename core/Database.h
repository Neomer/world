#ifndef DATABASE_H
#define DATABASE_H

#include "IDatabaseEntity.h"

class Database
{
public:
    Database();

    void open();
    void close();

    void save(IDatabaseEntity *entity);
};

#endif // DATABASE_H
