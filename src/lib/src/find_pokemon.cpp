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
    cout << ">>";
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
    constexpr int num_width = 12;
    constexpr int area_width = 15;
    // constexpr int uni_width = 17;
    constexpr int colunm_size = 2;
    constexpr int total_with = num_width + area_width + colunm_size;

    auto print_break = [] {
        std::cout.width(total_with);
        std::cout.fill('-');
        std::cout << "-" << std::endl;
        std::cout.fill(' ');
    };
    using table_t = std::array<std::string, colunm_size>;
    table_t headers{{"No", "Area"}};
    //1关都2丰缘3合众4神奥
    std::array<table_t, 4> data{
        {{{"1", "Kanto region"}},
         {{"2", "Hoenn region"}},
         {{"3", "Unova region"}},
         {{"4", "Sinnoh"}}}};
    auto print_line = [](table_t const &tbl) {
        auto const &[No, Area] = tbl;

        cout.width(num_width);
        cout << ("|" + No) << "|";

        cout.width(area_width);
        cout << (" " + Area) << "|";

        cout << endl;
    };
    std::cout.setf(std::ios::left, std::ios::adjustfield);
    print_break();
    print_line(headers);
    print_break();
    for (auto const &entry : data)
    {
        print_line(entry);
    }
    print_break();
}