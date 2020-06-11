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
    cout << ">";
    cin >> ss;
#pragma region cm
// do
// {
//     /*
//         TODO
//         1 展示菜单
//         2 根据序号选取地区，查询类（virtual）继承实现查询不同地区
//         3 查询类单例实现（ORM）
//         4 每个地区一张表
//         5
//     */
// } while (!flag);
#pragma endregion

    //find_pokemon_detail();
    vector<string>().swap(array);
}

/*
    resetiosflags 重置输出mask标志位
    setiosflags 设置输出mask位
    std::ios::left right 修改填充字符的默认定位，left和right 可以应用到任何输出。
    stew 更改输出下个输入\输出域的宽度 每次调用仅当次有效
*/
void find_pokemon::show_area()
{
    constexpr int num_width = 10;
    constexpr int area_width = 11;
    constexpr int uni_width = 12;
    constexpr int total_with = num_width + area_width;
    auto print_break = [] {
        std::cout.width(total_with);
        std::cout.fill('-');
        std::cout << "-" << std::endl;
        std::cout.fill(' ');
    };
    print_break();
    cout << setiosflags(ios::left) << setw(uni_width) << "|序号"
         << "|" << resetiosflags(ios::left) // 用完之后清除
         << setiosflags(ios::left) << setw(area_width) << "地区"
         << "|" << resetiosflags(ios::left) << endl;
    print_break();
    string num[] = {"1", "2", "3", "4"};
    string area[] = {"关都", "丰缘", "合众", "神奥"};
    for (size_t i = 0; i < 4; i++)
    {
        cout << setiosflags(ios::left) << setw(num_width) << "|" + num[i] << "|" << resetiosflags(ios::left)
             << setiosflags(ios::left) << setw(area_width) << area[i] << "|" << endl;
    }
    print_break();
}