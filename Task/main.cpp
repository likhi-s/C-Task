#include <iostream>
#include "ac.h"
#include "switch.h"
#include "wire.h"

using namespace std;

int main()
{

    AC acobj1("Voltas","white",2000);
    AC acobj2("Voltas","white",2000);
    AC acobj3("Voltas","white",2000);
    AC acobj4("Voltas","white",2000);
    AC acobj5("Voltas","white",2000);
    AC acobj6("Voltas","white",2000);
    AC acobj7("Voltas","white",2000);

    cout<<"---------------------------------------------AC-------------------------------------------------------------"<<endl;
    cout<<"object 1->"<<"Brand:"<<acobj1.m_brand<<"\t"<<"Colour:"<<acobj1.m_colour<<"\t"<<"Price:"<<acobj1.m_price<<endl;
    cout<<"object 2->"<<"Brand:"<<acobj2.m_brand<<"\t"<<"Colour:"<<acobj2.m_colour<<"\t"<<"Price:"<<acobj2.m_price<<endl;
    cout<<"object 3->"<<"Brand:"<<acobj3.m_brand<<"\t"<<"Colour:"<<acobj3.m_colour<<"\t"<<"Price:"<<acobj3.m_price<<endl;
    cout<<"object 4->"<<"Brand:"<<acobj4.m_brand<<"\t"<<"Colour:"<<acobj4.m_colour<<"\t"<<"Price:"<<acobj4.m_price<<endl;
    cout<<"object 5->"<<"Brand:"<<acobj5.m_brand<<"\t"<<"Colour:"<<acobj5.m_colour<<"\t"<<"Price:"<<acobj5.m_price<<endl;
    cout<<"object 6->"<<"Brand:"<<acobj6.m_brand<<"\t"<<"Colour:"<<acobj6.m_colour<<"\t"<<"Price:"<<acobj6.m_price<<endl;
    cout<<"object 7->"<<"Brand:"<<acobj7.m_brand<<"\t"<<"Colour:"<<acobj7.m_colour<<"\t"<<"Price:"<<acobj7.m_price<<endl;



    Switch switchobj1("white","on","xyz","fan1",2000);
    Switch switchobj2("Red","off","xyz","light1",2000);
    Switch switchobj3("green","off","xyz","light2",2000);
    Switch switchobj4("white","on","xyz","fan2",2000);
    Switch switchobj5("white","on","xyz","AC ",2000);
    Switch switchobj6("White","off","xyz","Socket",2000);
    Switch switchobj7("White","off","xyz","light3",2000);

    cout<<"---------------------------------------------SWITCH-------------------------------------------------------------"<<endl;

    cout<<"Object 1 ->"<<"Colour:"<<switchobj1.m_colour<<"\t"<<"State:"<<switchobj1.m_state<<"\t"<<"Brand:"<<switchobj1.m_brand<<"\t"<<"Name:"<<switchobj1.m_name<<"\t"<<"Price:"<<switchobj1.m_price<<endl;
    cout<<"Object 2 ->"<<"Colour:"<<switchobj2.m_colour<<"\t"<<"State:"<<switchobj2.m_state<<"\t"<<"Brand:"<<switchobj2.m_brand<<"\t"<<"Name:"<<switchobj2.m_name<<"\t"<<"Price:"<<switchobj2.m_price<<endl;
    cout<<"Object 3 ->"<<"Colour:"<<switchobj3.m_colour<<"\t"<<"State:"<<switchobj3.m_state<<"\t"<<"Brand:"<<switchobj3.m_brand<<"\t"<<"Name:"<<switchobj3.m_name<<"\t"<<"Price:"<<switchobj3.m_price<<endl;
    cout<<"Object 4 ->"<<"Colour:"<<switchobj4.m_colour<<"\t"<<"State:"<<switchobj4.m_state<<"\t"<<"Brand:"<<switchobj4.m_brand<<"\t"<<"Name:"<<switchobj4.m_name<<"\t"<<"Price:"<<switchobj4.m_price<<endl;
    cout<<"Object 5 ->"<<"Colour:"<<switchobj5.m_colour<<"\t"<<"State:"<<switchobj5.m_state<<"\t"<<"Brand:"<<switchobj5.m_brand<<"\t"<<"Name:"<<switchobj5.m_name<<"\t"<<"Price:"<<switchobj5.m_price<<endl;
    cout<<"Object 6 ->"<<"Colour:"<<switchobj6.m_colour<<"\t"<<"State:"<<switchobj6.m_state<<"\t"<<"Brand:"<<switchobj6.m_brand<<"\t"<<"Name:"<<switchobj6.m_name<<"\t"<<"Price:"<<switchobj6.m_price<<endl;
    cout<<"Object 7 ->"<<"Colour:"<<switchobj7.m_colour<<"\t"<<"State:"<<switchobj7.m_state<<"\t"<<"Brand:"<<switchobj7.m_brand<<"\t"<<"Name:"<<switchobj7.m_name<<"\t"<<"Price:"<<switchobj7.m_price<<endl;



    Wire wireobj1(2.2,12,"black","abc",1500);
    Wire wireobj2(1.2,20,"white","abc",1500);
    Wire wireobj3(3.0,30,"Red","abc",1500);
    Wire wireobj4(2  ,25,"white","abc",1500);
    Wire wireobj5(2.2,10,"black","abc",1500);
    Wire wireobj6(3.2,20,"Red","abc",1500);
    Wire wireobj7(2.2,40,"white","abc",1500);


    cout<<"---------------------------------------------WIRE-------------------------------------------------------------"<<endl;

    cout<<"object 1->"<<"Thickness:"<<wireobj1.m_thickness<<"\t"<<"length:"<<wireobj1.m_length<<"\t"<<"Colour:"<<wireobj1.m_colour<<"\t"<<"Brand:"<<wireobj1.m_brand<<"\t"<<"Price:"<<wireobj1.m_price<<endl;
    cout<<"object 2->"<<"Thickness:"<<wireobj2.m_thickness<<"\t"<<"length:"<<wireobj2.m_length<<"\t"<<"Colour:"<<wireobj2.m_colour<<"\t"<<"Brand:"<<wireobj2.m_brand<<"\t"<<"Price:"<<wireobj2.m_price<<endl;
    cout<<"object 3->"<<"Thickness:"<<wireobj3.m_thickness<<"\t"<<"length:"<<wireobj3.m_length<<"\t"<<"Colour:"<<wireobj3.m_colour<<"\t"<<"Brand:"<<wireobj3.m_brand<<"\t"<<"Price:"<<wireobj3.m_price<<endl;
    cout<<"object 4->"<<"Thickness:"<<wireobj4.m_thickness<<"\t"<<"length:"<<wireobj4.m_length<<"\t"<<"Colour:"<<wireobj4.m_colour<<"\t"<<"Brand:"<<wireobj4.m_brand<<"\t"<<"Price:"<<wireobj4.m_price<<endl;
    cout<<"object 5->"<<"Thickness:"<<wireobj5.m_thickness<<"\t"<<"length:"<<wireobj5.m_length<<"\t"<<"Colour:"<<wireobj5.m_colour<<"\t"<<"Brand:"<<wireobj5.m_brand<<"\t"<<"Price:"<<wireobj5.m_price<<endl;
    cout<<"object 6->"<<"Thickness:"<<wireobj6.m_thickness<<"\t"<<"length:"<<wireobj6.m_length<<"\t"<<"Colour:"<<wireobj6.m_colour<<"\t"<<"Brand:"<<wireobj6.m_brand<<"\t"<<"Price:"<<wireobj6.m_price<<endl;
    cout<<"object 7->"<<"Thickness:"<<wireobj7.m_thickness<<"\t"<<"length:"<<wireobj7.m_length<<"\t"<<"Colour:"<<wireobj7.m_colour<<"\t"<<"Brand:"<<wireobj7.m_brand<<"\t"<<"Price:"<<wireobj7.m_price<<endl;




    cout << "Hello World!" << endl;
    return 0;
}
