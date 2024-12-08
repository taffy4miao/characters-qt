//
// Created by yinxi on 2024/12/4.
//

#include "assistantBuff.h"

assistantBuff::assistantBuff(std::string name, int hp, int assistantValue,
                             assistantBuff::skillAssistantBuff skill) {
    this->name=std::move(name);
    this->hp=hp;
    this->assistantValue=assistantValue;
    this->skill=std::move(skill);
    this->num=currentNum++;
    this->level=1;
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