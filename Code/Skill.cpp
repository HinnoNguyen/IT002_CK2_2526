#include "Skill.h"

Skill::Skill(string n, int lv, double ct, int bd) {
    name = n;
    level = lv;
    castTime = ct;
    baseDamage = bd;
}

int Skill::getDamage() {
    return baseDamage * level;
}

int Skill::getFinalDamage() {
    return baseDamage * level;
}

void Skill::print() {
    cout << "Name: " << name << endl;
    cout << "Level: " << level << endl;
    cout << "Cast Time: " << castTime << endl;
    cout << "Damage: " << getFinalDamage() << endl;
}
