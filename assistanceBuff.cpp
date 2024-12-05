//
// Created by yinxi on 2024/12/4.
//

#include "assistanceBuff.h"

assistanceBuff::assistanceBuff(std::string name, int hp, int assistantValue,
                               assistanceBuff::skillAssistanceBuff skill) {
    this->name=std::move(name);
    this->hp=hp;
    this->assistantValue=assistantValue;
    this->skill=std::move(skill);
    this->num=currentNum++;
    this->level=1;
}

int assistanceBuff::getType() {
    return assistanceBuffNum;
}

void assistanceBuff::displayInfo() {

}

void assistanceBuff::levelUp(int targetLevel) {

}

void assistanceBuff::skillAssistanceBuff::skillLevelUp(int targetLevel){

}