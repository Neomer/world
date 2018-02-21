#include "Database.h"
#include "DatabaseTransferObject.h"

Database::Database()
{

}

void Database::save(IDatabaseEntity *entity)
{
    DatabaseTransferObject obj;
    entity->serialize(obj);
}
