#include "find_pokemon.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::resetiosflags;
using std::setiosflags;
using std::setw;
using std::string;
using std::vector;

find_pokemon::find_pokemon()
{
}

find_pokemon::~find_pokemon()
{
}

void find_pokemon::find_pokemon_detail()
{
    cout << BOLD_RED << "怪力" << NORMAL << endl;
}

void find_pokemon::find_transaction(std::string str)
{
    cout << str << endl;
}

void find_pokemon::control()
{
    string ss;
    vector<string> array;
    bool flag = false;
    show_area();
    do
    {
        /*
            TODO 
            1 展示菜单
            2 根据序号选取地区，查询类（virtual）继承实现查询不同地区
            3 查询类单例实现（ORM）
            4 每个地区一张表
            5 
        */
    } while (!flag);
    //find_pokemon_detail();
    vector<string>().swap(array);
}

void find_pokemon::show_area()
{
    cout << "------------------------------------" << endl;
    cout << setiosflags(ios::left) << setw(1) << "序号" << resetiosflags(ios::left) // 用完之后清除
         << setiosflags(ios::right) << setw(34) << "地区" << setw(12)
         << endl;
    cout << "------------------------------------" << endl;
    string num[] = {"1", "2", "3", "4"};
    string area[] = {"关都", "丰缘", "合众", "神奥"};
    for (size_t i = 0; i < 4; i++)
    {
        cout << setiosflags(ios::left) << setw(1) << num[i] << resetiosflags(ios::left)
             << setiosflags(ios::right) << setw(37) << area[i] << endl;
    }
    cout << "------------------------------------" << endl;
}