//
// Created by yinxi on 2024/12/5.
//

#include "charactersManager.h"

#include <utility>

template<typename T>
void charactersManager::addCharacter(std::shared_ptr<T> specificCharacter) {
    static_assert(std::is_base_of<character, T>::value, "T must be derived from Character");

    int id = specificCharacter->getId();
    std::string name = specificCharacter->getName();

    if (idMap.count(id) > 0 || nameMap.count(name) > 0) {
        throw std::runtime_error("Character with this ID or name already exists");
    }

    T* rawPtr = specificCharacter.get();
    idMap[id] = rawPtr;
    nameMap[name] = rawPtr;
    typeMap[std::type_index(typeid(T))].push_back(rawPtr);

    characters.push_back(std::move(specificCharacter));
}

inline void charactersManager::findByNum(int targetNum) {
    idMap[targetNum]->displayInfo();
}

inline void charactersManager::findByName(const std::string& targetName) {
    nameMap[targetName]->displayInfo();
}


charactersManager::command::command(std::string commandType) {
    this->commandType = std::move(commandType);
}
