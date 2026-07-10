#pragma once
#include "Cultivator.h"

class KetDan : public Cultivator {
public:
    KetDan(string);

    void generate() override;
};
