QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    model/IHero.cpp \
    model/IGeoObject.cpp \
    core/types/Coordinates.cpp \
    model/Inventory.cpp \
    model/World.cpp \
    model/IObject.cpp \
    core/types/Guid.cpp \
    model/IWeapon.cpp \
    model/IInventoryItem.cpp \
    model/IEquiped.cpp \
    model/IDynamicObject.cpp \
    model/IStaticObject.cpp \
    model/IInteractive.cpp \
    model/IRace.cpp \
    model/ISkill.cpp \
    model/IEffect.cpp \
    model/Skill.cpp \
    core/Database.cpp \
    core/DatabaseTransferObject.cpp \
    managers/SkillManager.cpp

HEADERS += \
    model/IHero.h \
    model/IGeoObject.h \
    core/types/Coordinates.h \
    model/Inventory.h \
    model/World.h \
    model/IObject.h \
    core/types/Guid.h \
    model/IWeapon.h \
    model/IInventoryItem.h \
    model/IEquiped.h \
    model/IDynamicObject.h \
    model/IStaticObject.h \
    model/IInteractive.h \
    model/IRace.h \
    model/ISkill.h \
    model/IEffect.h \
    model/Skill.h \
    core/IDatabaseEntity.h \
    core/Database.h \
    core/DatabaseTransferObject.h \
    managers/SkillManager.h \
    managers/IAbstractManager.h

INCLUDEPATH += $$PWD

OBJECTS_DIR += tmp
UI_DIR += tmp
MOC_DIR += tmp
