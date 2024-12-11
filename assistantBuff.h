//
// Created by yinxi on 2024/12/4.
//

#ifndef CHARACTERS_QT_ASSISTANTBUFF_H
#define CHARACTERS_QT_ASSISTANTBUFF_H

#include "assistant.h"

class assistantBuff : public assistant{
    class skillAssistantBuff : public skillAssistant{
    public:
        skillAssistantBuff(){
            throw std::runtime_error("不应使用默认构造函数");
        }
        skillAssistantBuff(std::string name,int value);
        void skillLevelUp(int targetLevel) override;
    };
    skillAssistantBuff skill;
public:
    assistantBuff(std::string name, int hp, int assistantValue, std::string skillName,int skillValue);
    void levelUp(int targetLevel) override;
    void displayInfo() override;
    int getType() override;
};

#endif //CHARACTERS_QT_ASSISTANTBUFF_H
