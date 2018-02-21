#ifndef WORLD_H
#define WORLD_H

#include <QMutex>
#include <QThread>
#include <QDateTime>
#include "IInteractive.h"

class World : public QThread
{
    Q_OBJECT

private:
    QDateTime _lastUpdate;

public:
    static World& Instance()
    {
        static World _instance;
        return _instance;
    }

    void spawn(IInteractive *actor);

    // Singleton
private:
    World();
    ~World();
    World(World const&) = delete;
    World& operator= (World const&) = delete;

    // QThread interface
protected:
    void run() override;
};

#endif // WORLD_H
