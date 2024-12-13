//
// Created by yinxi on 2024/12/4.
//

#ifndef CHARACTERS_QT_ASSISTANTDEBUFF_H
#define CHARACTERS_QT_ASSISTANTDEBUFF_H

#include "assistant.h"

class assistantDebuff : public assistant{
    class skillAssistantDebuff : public skillAssistant{
    public:
        skillAssistantDebuff() { // 不应被使用
            throw std::runtime_error("不应使用默认构造函数");
        }
        skillAssistantDebuff(std::string name,int value);
        void skillLevelUp(int targetLevel) override;
    };
    skillAssistantDebuff skill;
public:
    assistantDebuff(std::string name, int hp, int assistantValue,std::string skillName,int skillValue);
    void levelUp(int targetLevel) override;
    void displayInfo(int targetWidget) override;
    int getType() override;
};

#endif //CHARACTERS_QT_ASSISTANTDEBUFF_H
