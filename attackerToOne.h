//
// Created by yinxi on 2024/12/4.
//

#ifndef CHARACTERS_QT_ATTACKERTOONE_H
#define CHARACTERS_QT_ATTACKERTOONE_H

#include "attacker.h"

class attackerToOne : public attacker{
public:
    class skillAttackerToOne : public skill{
        int attackValue;
    };
    attackerToOne();
};

#endif //CHARACTERS_QT_ATTACKERTOONE_H
