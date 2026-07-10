#include "Cultivator.h"

#include "NormalSkill.h"
#include "MagicSkill.h"

#include <cstdlib>
#include <iostream>

using namespace std;

Cultivator::Cultivator(string n) {
    name = n;
}

void Cultivator::generateRandomSkills(int count) {
    const string normalNames[] = {
        "Luu Quang Kiem", "Thanh Phong Kiem", "Bach Nhat Kiem",
        "Huyen Thiet Dao", "Phong Le Tien"
    };
    const string magicNames[] = {
        "Hoa Cau Thuat", "Bang Phong Thuat", "Loi Dinh Thuat",
        "Doc Vu Thuat", "Thien Hoang Thuat"
    };

    for (int i = 0; i < count; i++) {
        if (rand() % 2 == 0) {
            string skillName = normalNames[rand() % 5];
            int level = rand() % 10 + 1;
            double castTime = (rand() % 10 + 1) / 10.0;
            int baseDamage = rand() % 91 + 10;
            addSkill(new NormalSkill(skillName, level, castTime, baseDamage));
        } else {
            string skillName = magicNames[rand() % 5];
            int level = rand() % 10 + 1;
            double castTime = rand() % 4 + 1;
            int baseDamage = rand() % 151 + 50;
            int mpCost = rand() % 91 + 10;
            double cooldown = rand() % 5 + 1;
            addSkill(new MagicSkill(skillName, level, castTime, baseDamage, mpCost, cooldown));
        }
    }
}

void Cultivator::addSkill(Skill* s) {
    skills.push_back(s);
}

int Cultivator::getSkillCount() const {
    return static_cast<int>(skills.size());
}

Skill* Cultivator::getSkill(int index) {
    return skills[index];
}

Skill* Cultivator::strongestSkill() {
    Skill* best = skills[0];

    for (auto s : skills)
        if (s->getDPS() > best->getDPS())
            best = s;

    return best;
}

void Cultivator::top2() {
    vector<Skill*> sorted = skills;

    sort(sorted.begin(), sorted.end(),
         [](Skill* a, Skill* b) {
             return a->getDPS() > b->getDPS();
         });

    sorted[0]->print();
    cout << endl;
    sorted[1]->print();
}

double Cultivator::timeToKill(int hp) {
    return hp / strongestSkill()->getDPS();
}

void Cultivator::print() {
    cout << "Name: " << name << endl;
    cout << "Realm: " << realm << endl;
    cout << "MP: " << mp << endl;
    cout << "Skill count: " << skills.size() << endl << endl;

    for (size_t i = 0; i < skills.size(); i++) {
        cout << "--- Skill " << i << " ---" << endl;
        skills[i]->print();
        cout << endl;
    }
}

Cultivator::~Cultivator() {
    for (auto s : skills)
        delete s;
}
