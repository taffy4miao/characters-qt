//
// Created by yinxi on 2024/12/4.
//

#include "attackerToAll.h"

attackerToAll::attackerToAll(std::string name, int hp, int attackValue,skillAttackerToAll skill){
    this->name = std::move(name);
    this->hp = hp;
    this->attackValue = attackValue;
    this->num = currentNum++;
    this->level = 0;
    this->skill = std::move(skill);
}

void attackerToAll::levelUp(int targetLevel) {

}

void attackerToAll::displayInfo() {

}

int attackerToAll::getType() {
    return attackerToAllNum;
}

void attackerToAll::skillAttackerToAll::skillLevelUp(int targetLevel) {

}
