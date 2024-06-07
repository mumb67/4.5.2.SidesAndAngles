// 4.5.2.Sides_and_Angles.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>



#include "Triangle.h"
#include "Quadraangle.h"



int main()
{
    setlocale(LC_ALL, "ru");
    Triangle T{ 10,20,30,50,60,70 };
    T.print_T();

    RightTriangle RT{ 10,20,30,50,60,90 };
    RT.print_RT();

    IsoscelesTriangle IT{10, 20, 10, 50, 60, 50};
    IT.print_IT();

    EquilateralTriangle ET{30, 30, 30, 60, 60, 60};
    ET.print_ET();

    
    Quadraangle Q{ 10,20,30,40,50,60,70,80 };
    Q.print_Q();

    Rectangle RQ{ 10,20,10,20,90,90,90,90 };
    RQ.print_RQ();

    Square SQ{ 20,20,20,20,90,90,90,90 };
    SQ.print_SQ();

    Parallelogramm PQ{ 20,30,20,30,30,40,30,40 };
    PQ.print_PQ();

    Rhomb RhQ{ 30,30,30,30,30,40,30,40 };
    RhQ.print_RhQ();
}