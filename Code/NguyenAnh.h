#pragma once
#include "Cultivator.h"

class NguyenAnh : public Cultivator {
public:
    NguyenAnh(string);

    void generate() override;
};
