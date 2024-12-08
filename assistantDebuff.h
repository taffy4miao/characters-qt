//
// Created by yinxi on 2024/12/4.
//

#ifndef CHARACTERS_QT_ASSISTANTDEBUFF_H
#define CHARACTERS_QT_ASSISTANTDEBUFF_H

#include "assistant.h"

class assistantDebuff : public assistant{
    class skillAssistantDebuff : public skillAssistant{
        void skillLevelUp(int targetLevel) override;
    };
    skillAssistantDebuff skill;
public:
    assistantDebuff(std::string name, int hp, int assistantValue,skillAssistantDebuff skill);
    void levelUp(int targetLevel) override;
    void displayInfo() override;
    int getType() override;
};

#endif //CHARACTERS_QT_ASSISTANTDEBUFF_H
