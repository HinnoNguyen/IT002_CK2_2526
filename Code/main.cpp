#include <ctime>
#include <iostream>

#include "TrucCo.h"
#include "KetDan.h"
#include "NguyenAnh.h"
#include "NormalSkill.h"
#include "MagicSkill.h"

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0)));

    int realmChoice;
    cout << "Chon canh gioi (1-Truc Co, 2-Ket Dan, 3-Nguyen Anh): ";
    cin >> realmChoice;

    string cultivatorName;
    cout << "Nhap ten tu si: ";
    cin >> cultivatorName;

    Cultivator* p = nullptr;

    switch (realmChoice) {
        case 1:
            p = new TrucCo(cultivatorName);
            break;
        case 2:
            p = new KetDan(cultivatorName);
            break;
        case 3:
            p = new NguyenAnh(cultivatorName);
            break;
        default:
            cout << "Lua chon khong hop le, mac dinh Truc Co.\n";
            p = new TrucCo(cultivatorName);
            break;
    }

    cout << "\n===== THONG TIN TU SI =====\n";
    p->print();

    int skillIndex;
    cout << "Chon ky nang (0 - " << p->getSkillCount() - 1 << "): ";
    cin >> skillIndex;

    if (skillIndex < 0 || skillIndex >= p->getSkillCount()) {
        cout << "Chi so khong hop le!\n";
    } else {
        cout << "\n===== KY NANG DA CHON =====\n";
        p->getSkill(skillIndex)->print();
    }

    cout << "\n===== TOP 2 KY NANG MANH NHAT (DPS) =====\n";
    if (p->getSkillCount() >= 2)
        p->top2();
    else
        cout << "Khong du ky nang de hien thi top 2.\n";

    cout << "\n===== KY NANG MANH NHAT =====\n";
    p->strongestSkill()->print();

    cout << "\nTime kill 4000HP = "
         << p->timeToKill(4000)
         << " s" << endl;

    delete p;
    return 0;
}
