//
// Created by yinxi on 2024/12/4.
//

#ifndef CHARACTERS_QT_ATTACKERTOTHREE_H
#define CHARACTERS_QT_ATTACKERTOTHREE_H

#include "attacker.h"

class attackerToThree : public attacker{
    attackerToThree(std::string name, int hp, int attackValue);
    void levelUp(int targetLevel) override;
    void displayInfo() override;
    int getType() override;
};

#endif //CHARACTERS_QT_ATTACKERTOTHREE_H
