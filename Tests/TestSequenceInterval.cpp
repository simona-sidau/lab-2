#include <cassert>
#include "../problems/SequenceInterval.h"

//
// Created by user on 3/6/2022.
//
void testIntervalSequence()
{
    int a, b, n, k, result[101];
    int v[101] = {1, 2, 7, 8, 11, 27, 13, 6, 8};
    n = 9;
    a = 5;
    b = 10;
    showSequenceInterval(n,v, a, b, k, result);
    assert(k == 2);
    assert(result[0] == 7);
    assert(result[1] == 8);

    int u[101] = {1, 2, 7, 8, 11, 27, 13, 6, 5, 10, 78};
    n = 11;
    showSequenceInterval(n,u, a, b, k, result);
    assert(k == 3);
    assert(result[0] == 6);
    assert(result[1] == 5);
    assert(result[2] == 10);

    int w[100] = {0, 89, 5, 6, 34, 35, 7, 5, 4, 7, 785, 12, 13};
    a = 1;
    b = 10;
    n = 13;
    showSequenceInterval(n, w, a, b, k, result);
    assert(k == 4);
    assert(result[0] == 7);
    assert(result[1] == 5);
    assert(result[2] == 4);
    assert(result[3] == 7);
}
