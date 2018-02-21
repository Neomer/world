#include "World.h"

World::World()
{

}

World::~World()
{

}

void World::run()
{
    while (true)
    {
        _lastUpdate = QDateTime::currentDateTime();

        msleep(50);
    }
}
