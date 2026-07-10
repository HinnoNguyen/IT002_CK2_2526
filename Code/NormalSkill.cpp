#include "NormalSkill.h"

NormalSkill::NormalSkill(string n, int lv, double ct, int bd)
    : Skill(n, lv, ct, bd) {}

double NormalSkill::getDPS() {
    return getFinalDamage() / castTime;
}

void NormalSkill::print() {
    cout << "=== Normal Skill ===" << endl;
    Skill::print();
    cout << "DPS: " << getDPS() << endl;
}
