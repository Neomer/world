#include "IEffect.h"
#include <QMetaObject>
#include <QDebug>

IEffect::IEffect()
{

}

void IEffect::serialize(DatabaseTransferObject &object)
{
    const QMetaObject *meta = this->metaObject();
    meta = meta->superClass();
    qDebug() << meta->className();
}
