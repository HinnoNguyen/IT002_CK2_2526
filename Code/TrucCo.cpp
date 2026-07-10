#include "TrucCo.h"

TrucCo::TrucCo(string n) : Cultivator(n) {
    realm = "Truc Co";
    generate();
}

void TrucCo::generate() {
    mp = rand() % 100 + 1;
    generateRandomSkills(rand() % 3 + 1);
}
