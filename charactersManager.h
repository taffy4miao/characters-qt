//
// Created by yinxi on 2024/12/5.
//

#ifndef CHARACTERS_QT_CHARACTERSMANAGER_H
#define CHARACTERS_QT_CHARACTERSMANAGER_H


#include "attackerToOne.h"
#include "attackerToAll.h"
#include "assistantBuff.h"
#include "assistantDebuff.h"
#include "healer.h"

class charactersManager{
    // 查询通过map实现
private:
    class command{
    public:
        std::unordered_map<std::string,int> commandTypeMap = {{"NUM",1},{"NAME",2},{"TYPE",3}};
        std::string commandType;    // 请求类型
        std::string commandName;    // 请求内容
        command(std::string commandType,std::string commandName);
    };
    std::vector<std::shared_ptr<character>> characters; // 暂时没有用
    std::unordered_map<int, std::shared_ptr<character>> idMap;
    std::unordered_map<std::string, std::shared_ptr<character>> nameMap;
    std::unordered_map<std::type_index, std::vector<std::shared_ptr<character>>> typeMap;
    std::list<command> commandHistory;
    int currentPage = 1;
    const int pageSize = 4;
    std::unique_ptr<std::vector<std::shared_ptr<character>>> characterVector;
    void displayCharacterVector();
    void searchByHistoryCommand(command c);
public:
    template<typename T>
    void addCharacter(std::shared_ptr<T> specificCharacter);

    void findByNum(int targetNum);
    void findByName(const std::string& targetName);
    void findByType(const std::string& type);

    void displayHistoryCommands(std::vector<command> commandVector);

};


#endif //CHARACTERS_QT_CHARACTERSMANAGER_H
