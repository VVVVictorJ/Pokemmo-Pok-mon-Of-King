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

void find_pokemon::show_icon()
{
    constexpr int num_width = 15;
    cout << endl;
    cout << ",-.----.                                        ,--.                                 " << endl;
    cout << "'\'    /  \\                  ,-.              ,--/  /|                                 " << endl;
    cout << "|   :    \\             ,--/ /|           ,---,': / '  ,--,                           " << endl;
    cout << "|   |  .\\ :   ,---.  ,--. :/ |           :   : '/ / ,--.'|         ,---,             " << endl;
    cout << ".   :  |: |  '   ,''\' :  : ' /            |   '   ,  |  |,      ,-+-. /  |  ,----._,. " << endl;
    cout << "|   |   \\ : /   /   ||  '  /      ,---.  '   |  /   `--'_     ,--.'|'   | /   /  ' / " << endl;
    cout << "|   : .   /.   ; ,. :'  |  :     /     \\ |   ;  ;   ,' ,'|   |   |  ,\"' ||   :     | " << endl;
    cout << ";   | |`-' '   | |: :|  |   \\   /    /  |:   '   \\  '  | |   |   | /  | ||   | .\\  . " << endl;
    cout << "|   | ;    '   | .; :'  : |. \\ .    ' / ||   |    ' |  | :   |   | |  | |.   ; ';  | " << endl;
    cout << ":   ' |    |   :    ||  | ' \\ \\'   ;   /|'   : |.  \\'  : |__ |   | |  |/ '   .   . | " << endl;
    cout << ":   : :     \\   \\  / '  : |--' '   |  / ||   | '_\\.'|  | '.'||   | |--'   `---`-'| | " << endl;
    cout << "|   | :      `----'  ;  |,'    |   :    |'   : |    ;  :    ;|   |/       .'__/\\_: | " << endl;
    cout << "`---'.|              '--'       \\   \\  / ;   |,'    |  ,   / '---'        |   :    : " << endl;
    cout << "  `---`                          `----'  '---'       ---`-'                \\   \\  /  " << endl;
    cout << "                                                                            `--`-'   " << endl;
    cout << endl;
}

void find_pokemon::show_menu()
{
    constexpr int num_width = 5;
    constexpr int ch_width = 20;
    constexpr int colunm_size = 2;
    constexpr int total_width = num_width + ch_width + colunm_size;

    using table_t = std::array<std::string, colunm_size>;
    table_t headers{{"No", "Mean"}};
    std::array<table_t, 4> data{
        {{"1.", "choose area"},
         {"2.", "help"},
         {"3.", "connect me"},
         {"4.", "report error"}}};

    auto print_break = [] {
        std::cout.width(total_width);
        std::cout.fill('-');
        std::cout << "-" << std::endl;
        std::cout.fill(' ');
    };

    auto print_line = [](table_t const &tbl) {
        auto const &[No, Mean] = tbl;
        cout.width(num_width);
        cout << ("|" + No) << "|";

        cout.width(ch_width);
        cout << (" " + Mean) << "|";
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

void find_pokemon::control()
{
    string ss;
    vector<string> array;
    bool flag = false;
    //TODO 展示菜单
    /*
        菜单样式如下：
        字符画
        1. 选择地区
        2. 帮助
        3. 联系方式
        4. 上报错误
    */
    show_icon();
    show_menu();
    //show_area();
    cout << ">>";
    cin >> ss;
#pragma region cm
// do
// {
//     /*
//         TODO
//         1 展示菜单
//         2 根据序号选取地区，查询类（virtual）继承实现查询不同地区
//         3 查询类单例实现
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
    //TODO 刷新屏幕

    constexpr int num_width = 12;
    constexpr int area_width = 15;
    constexpr int colunm_size = 2;
    constexpr int total_width = num_width + area_width + colunm_size;

    //打印分割线
    auto print_break = [] {
        std::cout.width(total_width);
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