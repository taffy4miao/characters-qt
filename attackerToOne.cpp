//
// Created by yinxi on 2024/12/4.
//

#include "attackerToOne.h"

#include <utility>

attackerToOne::attackerToOne(std::string name, int hp, int attackValue, std::string skillName,int skillValue) {
    this->name = std::move(name);
    this->hp = hp;
    this->attackValue = attackValue;
    this->num = currentNum++;
    this->level = 1;
    skillAttackerToOne s(std::move(skillName),skillValue);
    this->skill = s;
}

void attackerToOne::levelUp(int targetLevel) {

}

void attackerToOne::displayInfo() {

}

int attackerToOne::getType() {
    return attackerToOneNum;
}

void attackerToOne::skillAttackerToOne::skillLevelUp(int targetLevel) {

}

attackerToOne::skillAttackerToOne::skillAttackerToOne(std::string name, int value) {
    this->name = std::move(name);
    this->level = 1;
    this->skillAttackValue = value;
}
