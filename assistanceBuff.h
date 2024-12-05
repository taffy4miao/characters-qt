//
// Created by yinxi on 2024/12/4.
//

#ifndef CHARACTERS_QT_ASSISTANCEBUFF_H
#define CHARACTERS_QT_ASSISTANCEBUFF_H

#include "assistance.h"

class assistanceBuff : public assistance{
    class skillAssistanceBuff : public skillAssistant{
        void skillLevelUp(int targetLevel) override;
    };
    skillAssistanceBuff skill;
public:
    assistanceBuff(std::string name, int hp, int assistantValue,skillAssistanceBuff skill);
    void levelUp(int targetLevel) override;
    void displayInfo() override;
    int getType() override;
};

#endif //CHARACTERS_QT_ASSISTANCEBUFF_H
