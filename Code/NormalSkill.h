#pragma once
#include "Skill.h"

class NormalSkill : public Skill {
public:
    NormalSkill(string, int, double, int);

    double getDPS() override;
    void print() override;
};
