#include <QCoreApplication>
#include <QDebug>
#include <QDateTime>
#include <model/World.h>
#include <model/IHero.h>
#include <model/Skill.h>
#include <model/IEffect.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    IHero player_1, player_2;
    IWeapon sword, knife;
    IRace elf, human, dwarf;

    elf.setName("Elf");
    human.setName("Human");
    dwarf.setName("Dwarf");

    sword.setAttackRange(0.95);
    sword.setPhysicalDamage(20);
    sword.setMagicalDamage(2);
    sword.setWeight(1.5);

    knife.setAttackRange(0.15);
    knife.setPhysicalDamage(10);
    knife.setMagicalDamage(5);
    knife.setWeight(0.35);

    player_1.setRace(&elf);
    player_2.setRace(&human);

    player_1.getInventory().setEquipedWeapon(&sword);
    player_2.getInventory().setEquipedWeapon(&knife);

    player_1.dealDamage(player_2.getInventory().getEquipedWeapon()->getPhysicalDamage());
    player_2.dealDamage(player_1.getInventory().getEquipedWeapon()->getPhysicalDamage());

    IEffect stun;
    DatabaseTransferObject dto;
    stun.serialize(dto);

    return a.exec();
}
