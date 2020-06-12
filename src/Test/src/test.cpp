#include <find_pokemon.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void print_vector(std::vector<string> v);

int main()
{
    string ss;
    vector<string> array;
    char ch;
    bool flag = false;
    find_pokemon find_pokemon;
    //cout << "POKEMMO 天王队查询系统" << endl;
    find_pokemon.control();
    return 0;
}

void print_vector(std::vector<string> v)
{
    for (auto &r : v)
    {
        cout << r;
    }
    cout << endl;
}