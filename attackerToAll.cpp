//
// Created by yinxi on 2024/12/4.
//

#include "attackerToAll.h"

attackerToAll::attackerToAll(std::string name, int hp, int attackValue,std::string skillName,int skillValue){
    this->name = std::move(name);
    this->hp = hp;
    this->attackValue = attackValue;
    this->num = currentNum++;
    this->level = 1;
    skillAttackerToAll s(std::move(skillName),skillValue);
    this->skill = s;
}

void attackerToAll::levelUp(int targetLevel) {

}

void attackerToAll::displayInfo(int targetWidget) {

}

int attackerToAll::getType() {
    return attackerToAllNum;
}

void attackerToAll::skillAttackerToAll::skillLevelUp(int targetLevel) {

}

attackerToAll::skillAttackerToAll::skillAttackerToAll(std::string name,int value) {
    this->name = std::move(name);
    this->level = 1;
    this->skillAttackValue = value;
}
