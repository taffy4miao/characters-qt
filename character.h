//
// Created by yinxi on 2024/12/2.
//

#ifndef CHARACTERS_QT_CHARACTER_H
#define CHARACTERS_QT_CHARACTER_H

#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <unordered_map>
#include <typeindex>
#include <typeinfo>
#include <stdexcept>
#include <list>

extern int currentNum; // 角色编号

const int attackerToAllNum = 1;
const int attackerToOneNum = 2;
const int assistantBuffNum = 3;
const int assistantDebuffNum = 4;
const int healerNum = 5;

class character{
protected:
    int num;
    std::string name;
    int level;
    int hp;
    class skill{
    protected:
        std::string name;
        int level;
        // 加成
        //int value;
        virtual void skillLevelUp(int targetLevel) = 0;
    };
public:
    int getNum() const;
    virtual void levelUp(int targetLevel) = 0;
    virtual void displayInfo(int targetWidget) = 0;
    virtual int getType() = 0;
};

#endif //CHARACTERS_QT_CHARACTER_H
