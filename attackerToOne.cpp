//
// Created by yinxi on 2024/12/4.
//

#include "attackerToOne.h"

attackerToOne::attackerToOne(std::string name, int hp, int attackValue, attackerToOne::skillAttackerToOne skill) {
    this->name = std::move(name);
    this->hp = hp;
    this->attackValue = attackValue;
    this->num = currentNum++;
    this->level = 1;
    this->skill = std::move(skill);
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