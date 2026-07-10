#pragma once
#include "Skill.h"

class MagicSkill : public Skill {
private:
    int mpCost;
    double cooldown;

public:
    MagicSkill(string, int, double, int, int, double);

    double getDPS() override;
    void print() override;
};
