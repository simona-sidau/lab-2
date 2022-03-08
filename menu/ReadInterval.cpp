#include <iostream>

//
// Created by user on 3/6/2022.
//
void readInterval(int &a, int &b)
{
    do {
        std::cout<<"a = ";
        std::cin>>a;
        std::cout<<"b = ";
        std::cin>>b;

    }while(a > b);
}
