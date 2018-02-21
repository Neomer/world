#ifndef IWEAPON_H
#define IWEAPON_H

#include <model/IObject.h>
#include <model/IInventoryItem.h>
#include <model/IEquiped.h>

class IWeapon :
        public IEquiped
{
private:
    double _physicalDamage, _magicalDamage;
    double _attackRange;

public:
    IWeapon();

    double getPhysicalDamage() { return _physicalDamage; }
    void setPhysicalDamage(double value) { _physicalDamage = value; }

    double getMagicalDamage() { return _magicalDamage; }
    void setMagicalDamage(double value) { _magicalDamage = value; }

    double getAttackRange() { return _attackRange; }
    void setAttackRange(double value) { _attackRange = value; }

    // IInventoryItem interface
public:
    bool isStackable() override { return false; }
};

#endif // IWEAPON_H
