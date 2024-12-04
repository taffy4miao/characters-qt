//
// Created by yinxi on 2024/12/4.
//

#ifndef CHARACTERS_QT_ATTACKERWITHGUN_H
#define CHARACTERS_QT_ATTACKERWITHGUN_H

#include "attacker.h"

class attackerWithGun : public attacker{
    void levelUp(int targetLevel) override;
    void displayInfo() override;
    int getType() override;
};

#endif //CHARACTERS_QT_ATTACKERWITHGUN_H
