#include <iostream>

//
// Created by user on 3/6/2022.
//
void read(int &n, int v[])
{
    std::cout<<"Dati numarul de element din lista: ";
    std::cin >> n;
    std::cin.clear();
    std::cin.get();
    for(int i = 0; i < n; i++) {
        std::cout <<"v["<<i<<"]= ";
        std::cin >> v[i];
    }
}

