#include "Inventory.h"

Inventory::Inventory()
{

}

IInventoryItem *Inventory::itemAt(int index) const
{
    Q_ASSERT(index > 0 && index < _items.count());

    return _items.at(index);
}
