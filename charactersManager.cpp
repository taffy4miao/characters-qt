//
// Created by yinxi on 2024/12/5.
//

#include "charactersManager.h"

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
    idMap[targetNum]->displayInfo(0);
    command c("NUM",std::to_string(targetNum));
    commandHistory.push_back(c);
    if(commandHistory.size() > 5)
        commandHistory.erase(commandHistory.begin());
}

void charactersManager::findByName(const std::string& targetName) {
    nameMap[targetName]->displayInfo(0);
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
        characterVector = std::make_unique<std::vector<std::shared_ptr<character>>>(it->second);
        displayCharacterVector();
        currentPage = 1;

        command c("TYPE",type);
        commandHistory.push_back(c);
        if(commandHistory.size() > 5)
            commandHistory.erase(commandHistory.begin());
    }
    else throw std::runtime_error("未找到指定类型");
}

void charactersManager::displayCharacterVector() {
    int characterNum = characterVector->size();
    int pageNum = (characterNum + pageSize - 1) / pageSize;

    //TODO:更改为修改对应label
    //std::cout << "当前页面: " << currentPage << "/" << pageNum << std::endl;

    int startIndex = (currentPage - 1) * pageSize;
    int endIndex = std::min(startIndex + pageSize, characterNum); // 剩余角色可能不满一页
    for(int i=startIndex;i<endIndex;i++){
        characterVector->at(i)->displayInfo(startIndex % pageSize); // 在对应位置展示对应序号的角色
    }

    //TODO:在槽函数中通过++currentPage或--currentPage实现边界检查和翻页
}

void charactersManager::searchByHistoryCommand(charactersManager::command c) {
    switch(c.commandTypeMap[c.commandType]){
        case 1: // Num
            findByNum(atoi(c.commandName.c_str()));
            break;
        case 2: // Name
            findByName(c.commandName);
            break;
        case 3:
            findByType(c.commandName);
            break;
        default:
            throw std::runtime_error("不合法的请求");
    }
}

charactersManager::command::command(std::string commandType,std::string commandName) {
    this->commandType = std::move(commandType);
    this->commandName = std::move(commandName);
}

