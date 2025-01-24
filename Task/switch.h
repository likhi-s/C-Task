#ifndef SWITCH_H
#define SWITCH_H
#include <iostream>
using namespace std;

class Switch
{
public:
    string m_colour;
    string m_state;//on or off
    string m_brand;
    string m_name;
    int m_price;
    Switch(string colour,string state,string brand,string name,int price);

};

#endif // SWITCH_H
