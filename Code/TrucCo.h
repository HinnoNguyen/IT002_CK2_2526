#pragma once
#include "Cultivator.h"

class TrucCo : public Cultivator {
public:
    TrucCo(string);

    void generate() override;
};
