#ifndef IACTOR_H
#define IACTOR_H

#include <QObject>
#include "IGeoObject.h"

///
/// \brief IActor активный объект, находящийся в мире (нпс, герой, нейтрал и т.п.)
///
class IInteractive
{
public:
    explicit IInteractive();

    ///
    /// \brief isAttackable объект может быть подвергнут атаке
    /// \return
    ///
    virtual bool isAttackable() = 0;
    ///
    /// \brief isSelectable объект можно выбрать
    /// \return
    ///
    virtual bool isSelectable() = 0;
};

#endif // IACTOR_H
