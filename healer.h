//
// Created by yinxi on 2024/12/4.
//

#ifndef CHARACTERS_QT_HEALER_H
#define CHARACTERS_QT_HEALER_H

#include "character.h"

class healer : public character{
private:
    int healValue;
    class skillHeal : public skill{
    private:
        int healValue;
    public:
        skillHeal(){
            throw std::runtime_error("不应使用默认构造函数");
        }
        skillHeal(std::string name,int value);
        void skillLevelUp(int targetLevel) override;
    };
    skillHeal skill;
public:
    healer(std::string name,int hp,int healValue,std::string skillName,int skillValue);
    void levelUp(int targetLevel) override;
    void displayInfo() override;
    int getType() override;
};

#endif //CHARACTERS_QT_HEALER_H
