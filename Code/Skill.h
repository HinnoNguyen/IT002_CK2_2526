#pragma once
#include <iostream>
#include <string>
using namespace std;

class Skill {
protected:
    string name;
    int level;
    double castTime;
    int baseDamage;

public:
    Skill(string n, int lv, double ct, int bd);

    virtual double getDPS() = 0;

    int getDamage();
    int getFinalDamage();

    virtual void print();

    virtual ~Skill() {}
};
