//
// Created by yinxi on 2024/12/4.
//

#include "assistantBuff.h"

assistantBuff::assistantBuff(std::string name, int hp, int assistantValue,
                             std::string skillName,int skillValue) {
    this->name=std::move(name);
    this->hp=hp;
    this->assistantValue=assistantValue;
    this->num=currentNum++;
    this->level=1;
    skillAssistantBuff s(std::move(skillName),skillValue);
    this->skill=s;
}

int assistantBuff::getType() {
    return assistantBuffNum;
}

void assistantBuff::displayInfo() {

}

void assistantBuff::levelUp(int targetLevel) {

}

void assistantBuff::skillAssistantBuff::skillLevelUp(int targetLevel){

}

assistantBuff::skillAssistantBuff::skillAssistantBuff(std::string name, int value) {
    this->name = std::move(name);
    this->level = 1;
    this->skillAssistantValue = value;
}
