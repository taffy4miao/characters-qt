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

    idMap[id] = specificCharacter;
    nameMap[name] = specificCharacter;
    typeMap[std::type_index(typeid(T))].push_back(specificCharacter);

    characters.push_back(specificCharacter);
}

void charactersManager::findByNum(int targetNum) {
    idMap[targetNum]->displayInfo();
    command c("NUM",std::to_string(targetNum));
    commandHistory.push_back(c);
    if(commandHistory.size() > 5)
        commandHistory.erase(commandHistory.begin());
}

void charactersManager::findByName(const std::string& targetName) {
    nameMap[targetName]->displayInfo();
    command c("NAME",targetName);
    commandHistory.push_back(c);
    if(commandHistory.size() > 5)
        commandHistory.erase(commandHistory.begin());
}

void charactersManager::displayHistoryCommands(std::vector<command> commandVector) {

}

void charactersManager::findByType(const std::string& type) {
    auto it = typeMap.find(std::type_index(typeid(type)));
    if (it != typeMap.end()) {
        for (character* c : it->second) {
            c->displayInfo();
        }
    }
}

charactersManager::command::command(std::string commandType,std::string commandName) {
    this->commandType = std::move(commandType);
    this->commandName = std::move(commandName);
}

