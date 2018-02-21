#ifndef IABSTRACTMANAGER_H
#define IABSTRACTMANAGER_H

#include <model/ISkill.h>

class IAbstractManager
{
public:
    ///
    /// \brief getTableName значение таблицы, гед хранятся сущности данного типа
    /// \return
    ///
    virtual QString getTableName() = 0;
};

#endif // IABSTRACTMANAGER_H
