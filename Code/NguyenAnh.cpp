#include "NguyenAnh.h"

NguyenAnh::NguyenAnh(string n) : Cultivator(n) {
    realm = "Nguyen Anh";
    generate();
}

void NguyenAnh::generate() {
    mp = rand() % 401 + 300;
    generateRandomSkills(rand() % 5 + 3);
}
