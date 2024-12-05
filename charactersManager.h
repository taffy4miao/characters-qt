//
// Created by yinxi on 2024/12/5.
//

#ifndef CHARACTERS_QT_CHARACTERSMANAGER_H
#define CHARACTERS_QT_CHARACTERSMANAGER_H


#include "attackerToOne.h"
#include "attackerToAll.h"
#include "assistanceBuff.h"
#include "assistanceDebuff.h"
#include "healer.h"

class charactersManager{
private:
    std::vector<std::shared_ptr<character>> characters;
    std::unordered_map<int, character*> idMap;
    std::unordered_map<std::string, character*> nameMap;
    std::unordered_map<std::type_index, std::vector<character*>> typeMap;
    class command{
        const std::unordered_map<std::string,int> commandTypeMap = {{"NUM",1},{"NAME",2},{"TYPE",3}};
        std::string commandType;
        command(std::string commandType);
    };
public:
    template<typename T>
    void addCharacter(std::shared_ptr<T> specificCharacter);

    inline void findByNum(int targetNum);
    inline void findByName(const std::string& targetName);

};


#endif //CHARACTERS_QT_CHARACTERSMANAGER_H
