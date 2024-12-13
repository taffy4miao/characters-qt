//
// Created by yinxi on 2024/12/4.
//

#include "healer.h"

void healer::levelUp(int targetLevel) {

}

void healer::displayInfo(int targetWidget) {

}

int healer::getType() {
    return healerNum;
}

healer::healer(std::string name, int hp, int healValue, std::string skillName, int skillValue) {
    this->name = std::move(name);
    this->hp = hp;
    this->healValue = healValue;
    this->num = currentNum++;
    this->level = 1;
    skillHeal s(std::move(skillName),skillValue);
    this->skill = s;
}

healer::skillHeal::skillHeal(std::string name, int value) {
    this->name = std::move(name);
    this->level = 1;
    this->healValue = value;
}

void healer::skillHeal::skillLevelUp(int targetLevel) {

}
