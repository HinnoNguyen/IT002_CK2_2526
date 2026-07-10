#include "MagicSkill.h"

MagicSkill::MagicSkill(string n, int lv, double ct, int bd, int mp, double cd)
    : Skill(n, lv, ct, bd) {
    mpCost = mp;
    cooldown = cd;
}

double MagicSkill::getDPS() {
    return getFinalDamage() / (castTime + cooldown);
}

void MagicSkill::print() {
    cout << "=== Magic Skill ===" << endl;
    Skill::print();
    cout << "MP Cost: " << mpCost << endl;
    cout << "Cooldown: " << cooldown << endl;
    cout << "DPS: " << getDPS() << endl;
}
