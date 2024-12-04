//
// Created by yinxi on 2024/12/2.
//

#ifndef CHARACTERS_QT_CHARACTER_H
#define CHARACTERS_QT_CHARACTER_H

#include <string>

const int attackerWithGunNum = 1;
const int attackerWithKnifeNum = 2;


class character{
protected:
    int num;
    std::string name;
    int level;
    int hp;
public:
    virtual void levelUp(int targetLevel) = 0;
    virtual void displayInfo() = 0;
    virtual int getType() = 0;
};

#endif //CHARACTERS_QT_CHARACTER_H
