#include <cassert>
#include "../problems/PrimeNumberSequence.h"

//
// Created by user on 3/6/2022.
//
void testPrimeNumberSequence()
{
int n, v[100]= {1, 3, 18, 7, 5, 12, 14}, k, result[100];
n = 7;
showPrimeNumberSequence(n,v, k, result);
assert( k == 2);
assert(result[0] == 7);
assert(result[1] == 5);

int u[100] = {3, 9, 3, 13, 37};
n = 5;

showPrimeNumberSequence(n,u, k, result);
assert(result[0] == 3);
assert(result[1] == 13);
assert(result[2] == 37);
assert(k == 3);


int w[100] = {8, 17, 16, 2, 3, 5, 17, 29, 58, 16, 13, 67};
n = 12;

showPrimeNumberSequence(n, w, k, result);
assert(k == 5);
assert(result[0] == 2);
assert(result[1] == 3);
assert(result[2] == 5);
assert(result[3] == 17);
assert(result[4] == 29);


}
