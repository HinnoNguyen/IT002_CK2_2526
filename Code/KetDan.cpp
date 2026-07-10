#include "KetDan.h"

KetDan::KetDan(string n) : Cultivator(n) {
    realm = "Ket Dan";
    generate();
}

void KetDan::generate() {
    mp = rand() % 201 + 100;
    generateRandomSkills(rand() % 4 + 2);
}
