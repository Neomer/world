#ifndef IEQUIPED_H
#define IEQUIPED_H

#include <model/IObject.h>
#include <model/IInventoryItem.h>

///
/// \brief IEquiped объект, который может быть одет
///
class IEquiped :
        public IInventoryItem
{
public:
    IEquiped();

    // IInventoryItem interface
public:
    bool isEquippable() override { return true; }
};

#endif // IEQUIPED_H
