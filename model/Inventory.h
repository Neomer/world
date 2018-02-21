#ifndef INVENTORY_H
#define INVENTORY_H

#include <QList>

#include <model/IInventoryItem.h>
#include <model/IWeapon.h>

///
/// \brief Inventory инвентарь персонажа
///
class Inventory
{
private:
    IWeapon *_equipedWeapon;
    QList<IInventoryItem *> _items;

public:
    Inventory();

    ///
    /// \brief setEquipedWeapon одетое оружие
    /// \param weapon
    ///
    void setEquipedWeapon(IWeapon *weapon) { _equipedWeapon = weapon; }
    ///
    /// \brief getEquipedWeapon одетое оружие
    /// \return
    ///
    IWeapon *getEquipedWeapon() { return _equipedWeapon; }

    int itemsCount() { return _items.count(); }

    IInventoryItem *itemAt(int index) const;
};

#endif // INVENTORY_H
