#ifndef SKILLMANAGER_H
#define SKILLMANAGER_H

#include <model/ISkill.h>
#include "IAbstractManager.h"

class SkillManager : public IAbstractManager
{
public:
    static ISkill* GetById(Guid id);

private:
    SkillManager();
};

#endif // SKILLMANAGER_H
