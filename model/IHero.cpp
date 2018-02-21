#include "IHero.h"

IHero::IHero() :
    _hp(100), _mp(100), _cp(100),
    _race(0)
{

}

void IHero::dealDamage(double damage)
{
    _hp = (_hp > damage ) ? _hp - damage : 0;
}
