#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
class Restaurant
{
private:
    char location[50];
    char phone_number[20];
    char evaluates[200];

public:
    void Search();
    void Set();
    void evaluate();
};
void Restaurant::Set()
{
    cout << "输入餐厅位置，电话号码" << endl;
    cin >> location >> phone_number;
    ofstream out("Restaurant.txt");
    out << location << "  " << phone_number << endl;
    out.close();
    Menu();
}
void Restaurant::Search()
{
    system("cls");
    cout << endl << endl;
    ifstream in("Restaurant.txt");
    cout << "地址" << "         " << "联系电话" << endl;
    while (in >> location >> phone_number)
    {
        cout << location << "  " << phone_number << endl;
    }
    in.close();
    Menu();
}
void Restaurant::evaluate()
{
    system("cls");
    cout << endl << "       历史评价：" << endl << endl;
    ifstream in("evaluate.txt");
    while (in >> evaluates)
        cout << "             " << evaluates << endl << endl;
    in.close();
    Menu();
}
