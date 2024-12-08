//
// Created by yinxi on 2024/12/4.
//

#ifndef CHARACTERS_QT_ASSISTANTBUFF_H
#define CHARACTERS_QT_ASSISTANTBUFF_H

#include "assistant.h"

class assistantBuff : public assistant{
    class skillAssistantBuff : public skillAssistant{
        void skillLevelUp(int targetLevel) override;
    };
    skillAssistantBuff skill;
public:
    assistantBuff(std::string name, int hp, int assistantValue, skillAssistantBuff skill);
    void levelUp(int targetLevel) override;
    void displayInfo() override;
    int getType() override;
};

#endif //CHARACTERS_QT_ASSISTANTBUFF_H
