//
// Created by yinxi on 2024/12/2.
//

#ifndef CHARACTERS_QT_CHARACTER_H
#define CHARACTERS_QT_CHARACTER_H

#include <string>
#include <utility>

int currentNum = 1;

const int attackerToAllNum = 1;
const int attackerToOneNum = 2;
const int assistanceBuffNum = 3;



class character{
protected:
    int num;
    std::string name;
    int level;
    int hp;
    class skill{
        std::string name;
        int level;
        // 加成
        int value;
        virtual void skillLevelUp(int targetLevel) = 0;
    };
public:
    virtual void levelUp(int targetLevel) = 0;
    virtual void displayInfo() = 0;
    virtual int getType() = 0;
};

#endif //CHARACTERS_QT_CHARACTER_H
