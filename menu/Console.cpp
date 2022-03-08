#include <iostream>
#include "Option.h"
#include "RunMenu.h"
#include "Read.h"
#include "Show.h"
#include "../problems/PrimeNumberSequence.h"
#include "ReadInterval.h"
#include "../problems/SequenceInterval.h"

//
// Created by user on 3/6/2022.
//
void console()
{
    int v[101], n, a, b, result[101], k;
    char choice;
    bool consoleOn = true;
    while(consoleOn)
    {
        runMenu();
        option(choice);
        switch(choice)
        {
            case '1':
                read(n, v);break;
            case '2': show(n,v); break;
            case '3': showPrimeNumberSequence(n,v, k, result); show(k, result); break;
            case '4': readInterval(a,b); showSequenceInterval(n,v, a, b, k, result); show(k, result); break;
            case 'x': std::cout<<"Sfarsitul programului"; consoleOn = false; break;
            default: std::cout<<"Nu exista o astfel de optiune! Reincercati!"<<std::endl; break;
        }


    }
}



