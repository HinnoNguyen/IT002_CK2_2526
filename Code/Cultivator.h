#pragma once

#include <vector>
#include <algorithm>
#include <string>

#include "Skill.h"

class Cultivator {
protected:
    string name;
    string realm;
    int mp;

    vector<Skill*> skills;

    void generateRandomSkills(int count);

public:
    Cultivator(string);

    virtual void generate() = 0;

    void addSkill(Skill*);
    void print();

    int getSkillCount() const;
    Skill* getSkill(int index);
    Skill* strongestSkill();

    void top2();
    double timeToKill(int hp);

    virtual ~Cultivator();
};
