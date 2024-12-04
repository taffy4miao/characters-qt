//
// Created by yinxi on 2024/12/3.
//

#ifndef CHARACTERS_QT_ATTACKER_H
#define CHARACTERS_QT_ATTACKER_H

#include"character.h"
class attacker :public character{
protected:
    int attackValue;
    class skillAttack : public skill{
    protected:
        int attackValue;
    };
};

#endif //CHARACTERS_QT_ATTACKER_H
