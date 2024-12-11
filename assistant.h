//
// Created by yinxi on 2024/12/4.
//

#ifndef CHARACTERS_QT_ASSISTANT_H
#define CHARACTERS_QT_ASSISTANT_H

#include "character.h"

class assistant : public character{
protected:
    int assistantValue;
    class skillAssistant : public skill{
    protected:
        int skillAssistantValue;
    };
};

#endif //CHARACTERS_QT_ASSISTANT_H
