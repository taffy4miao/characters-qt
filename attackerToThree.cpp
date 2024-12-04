//
// Created by yinxi on 2024/12/4.
//

#include "attackerToThree.h"

attackerToThree::attackerToThree(std::string name, int hp, int attackValue){
    this->name = std::move(name);
    this->hp = hp;
    this->attackValue = attackValue;
    this->num = currentNum++;
    this->level = 0;
}

void attackerToThree::levelUp(int targetLevel) {

}

void attackerToThree::displayInfo() {

}

int attackerToThree::getType() {
    return attackerToThreeNum;
}