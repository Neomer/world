#ifndef IINVENTORYITEM_H
#define IINVENTORYITEM_H

#include "IObject.h"

///
/// \brief IInventoryItem может находится в инвенторе
///
class IInventoryItem : IObject
{
private:
    double _weight;

public:
    IInventoryItem();

    double getWeight() { return _weight; }
    void setWeight(double value) { _weight = value; }

    ///
    /// \brief isEquippable может одеваться
    /// \return
    ///
    virtual bool isEquippable() = 0;
    ///
    /// \brief isStackable может стакаться
    /// \return
    ///
    virtual bool isStackable() = 0;
};

#endif // IINVENTORYITEM_H
