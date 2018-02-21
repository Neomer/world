#ifndef IEFFECT_H
#define IEFFECT_H

#include "IObject.h"
#include <core/IDatabaseEntity.h>

///
/// \brief IEffect эффект на персонаже
///
class IEffect :
        public IDatabaseEntity,
        public IObject
{
    Q_OBJECT

public:
    IEffect();

    // IDatabaseEntity interface
public:
    void serialize(DatabaseTransferObject &object) override;
};

#endif // IEFFECT_H
