#ifndef ISKILL_H
#define ISKILL_H

#include "IObject.h"
#include "IEffect.h"
#include <core/IDatabaseEntity.h>

///
/// \brief  ISkill умение персонажа
///
class ISkill :
        public IObject,
        public IDatabaseEntity
{
private:
    double _mcost;
    bool _is_magical, _is_physical, _is_targetable;
    IEffect *_effect;

public:
    ISkill();

    void setManaCost(double value) { _mcost = value; }
    double getManaCost() { return _mcost; }

    ///
    /// \brief setEffect эффект на персонаже после применения заклинания
    /// \param value
    ///
    void setEffect(IEffect *value) { _effect = value; }
    ///
    /// \brief getEffect эффект на персонаже после применения заклинания
    /// \return
    ///
    IEffect *getEffect() { return _effect; }
    ///
    /// \brief hasEffect имеется ли эффект
    /// \return
    ///
    bool hasEffect() { return _effect != 0; }
    ///
    /// \brief setIsMagical магический скилл
    /// \param value
    ///
    void setIsMagical(bool value) { _is_magical = value; }
    ///
    /// \brief isMagical магический скилл
    /// \return
    ///
    bool isMagical() { return _is_magical; }
    ///
    /// \brief setIsMagical магический скилл
    /// \param value
    ///
    void setIsPhysical(bool value) { _is_physical = value; }
    ///
    /// \brief isPhysical физический скилл
    /// \return
    ///
    bool isPhysical() { return _is_physical; }
    ///
    /// \brief setIsMagical магический скилл
    /// \param value
    ///
    void setIsTargetable(bool value) { _is_targetable = value; }
    ///
    /// \brief isTargetable направленный скилл
    /// \return
    ///
    bool isTargetable() { return _is_targetable; }

    // IDatabaseEntity interface
public:
    void serialize(DatabaseTransferObject &object) override;
};

#endif // ISKILL_H
