#ifndef WIRE_H
#define WIRE_H
#include <iostream>
using namespace std;

class Wire
{
public:
    float m_thickness;
    float m_length;
    string m_colour;
    string m_brand;
    float m_price;
    Wire(float thickness,float length,string colour,string brand,float price);
};

#endif // WIRE_H
