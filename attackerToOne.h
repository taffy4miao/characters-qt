//
// Created by yinxi on 2024/12/4.
//

#ifndef CHARACTERS_QT_ATTACKERTOONE_H
#define CHARACTERS_QT_ATTACKERTOONE_H

#include "attacker.h"

class attackerToOne : public attacker{
    class skillAttackerToOne : public skillAttack{
    public:
        skillAttackerToOne() { //不应被使用
            throw std::runtime_error("不应使用默认构造函数");
        }
        skillAttackerToOne(std::string name,int value);
        void skillLevelUp(int targetLevel) override;
    };
    skillAttackerToOne skill;
public:
    attackerToOne(std::string name, int hp, int attackValue,std::string skillName,int skillValue);
    void levelUp(int targetLevel) override;
    void displayInfo() override;
    int getType() override;
};

#endif //CHARACTERS_QT_ATTACKERTOONE_H
