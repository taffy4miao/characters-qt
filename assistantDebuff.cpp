//
// Created by yinxi on 2024/12/4.
//

#include "assistantDebuff.h"

assistantDebuff::assistantDebuff(std::string name, int hp, int assistantValue,std::string skillName,int skillValue) {
    this->name = std::move(name);
    this->hp = hp;
    this->assistantValue = assistantValue;
    this->num = currentNum++;
    this->level = 1;
    skillAssistantDebuff s(std::move(skillName),skillValue);
    this->skill = s;
}

void assistantDebuff::levelUp(int targetLevel) {

}

void assistantDebuff::displayInfo(int targetWidget) {

}

int assistantDebuff::getType() {
    return assistantDebuffNum;
}

void assistantDebuff::skillAssistantDebuff::skillLevelUp(int targetLevel) {

}

assistantDebuff::skillAssistantDebuff::skillAssistantDebuff(std::string name, int value) {
    this->name = std::move(name);
    this->level = 1;
    this->skillAssistantValue = value;
}
