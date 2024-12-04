//
// Created by yinxi on 2024/12/4.
//

#ifndef CHARACTERS_QT_ATTACKERTOALL_H
#define CHARACTERS_QT_ATTACKERTOALL_H

#include "attacker.h"

class attackerToAll : public attacker{
    class skillAttackerToAll : public skillAttack{
    public:
        void skillLevelUp(int targetLevel) override;
    };
    skillAttackerToAll skill;
public:
    attackerToAll(std::string name, int hp, int attackValue,skillAttackerToAll skill);
    void levelUp(int targetLevel) override;
    void displayInfo() override;
    int getType() override;
};

#endif //CHARACTERS_QT_ATTACKERTOALL_H
