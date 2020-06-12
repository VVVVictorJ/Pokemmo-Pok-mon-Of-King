#ifndef FIND
#define FIND

#define BOLD_RED "\e[31;1m"
#define NORMAL "\e[0m"
#include <iostream>
#include <string>
#include <vector>

class find_pokemon
{
private:
    //TODO 数据库类
public:
    find_pokemon();
    ~find_pokemon();
    void find_pokemon_detail();
    void control();
    void show_area();
    void find_transaction(std::string str);
    void show_icon();
    void show_menu();
};

#endif