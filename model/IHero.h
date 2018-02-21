#ifndef IHERO_H
#define IHERO_H

#include "IInteractive.h"
#include "Inventory.h"
#include "IDynamicObject.h"
#include "IRace.h"

///
/// \brief IHero персонаж, находящийся внутри игрового мира и управляемый игроком
///
class IHero :
        public IInteractive,
        public IDynamicObject
{
private:
    Inventory _inventory;
    double _hp, _mp, _cp;
    IRace *_race;

public:
    IHero();

    ///
    /// \brief setRace раса
    ///
    void setRace(IRace *value) { _race = value; }
    ///
    /// \brief getRace раса
    /// \return
    ///
    IRace *getRace() { return _race; }
    ///
    /// \brief getInventory возвращает инвентарь персонажа
    /// \return
    ///
    Inventory &getInventory() { return _inventory; }
    ///
    /// \brief dealDamage нанести урон персонажу
    /// \param damage
    ///
    void dealDamage(double damage);

    // IInteractive interface
public:
    bool isAttackable() override { return true; }
    bool isSelectable() override { return true; }
};

#endif // IHERO_H
