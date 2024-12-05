//
// Created by yinxi on 2024/12/4.
//

#ifndef CHARACTERS_QT_ATTACKERTOONE_H
#define CHARACTERS_QT_ATTACKERTOONE_H

#include "attacker.h"

class attackerToOne : public attacker{
    class skillAttackerToOne : public skill{
    public:
        void skillLevelUp(int targetLevel) override;
    };
    skillAttackerToOne skill;
public:
    attackerToOne(std::string name, int hp, int attackValue,skillAttackerToOne skill);
    void levelUp(int targetLevel) override;
    void displayInfo() override;
    int getType() override;
};

#endif //CHARACTERS_QT_ATTACKERTOONE_H
