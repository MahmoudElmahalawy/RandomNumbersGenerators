#include<iostream>
#include "MRG_seeds.h"
#define norm   2.328306549295728e-10  /* 1.0/(m1+1) */
#define norm2  2.328318825240738e-10  /* 1.0/(m2+1) */
#define m1     4294967087
#define m2     4294944443

using namespace std;


void update(int stream,long long x1,long long x2){

    drng[stream][0] = drng[stream][1];
    drng[stream][1] = drng[stream][2];
    drng[stream][2] = x1;

    drng[stream][3] = drng[stream][4];
    drng[stream][4] = drng[stream][5];
    drng[stream][5] = x2;

}

/* Generate the next random number. */

double mrand(int stream){

    long long x1 = (1403580 * drng[stream][1] - 810728 * drng[stream][0]) % m1;
    long long x2 = (527612 * drng[stream][4] - 1370589 * drng[stream][3]) % m1;
    double  y;

    update(stream,x1,x2);
    y = (x1 - x2) % m1;

    while(y<0) y += m1;

    return y / m1;

}

/* Set seed vector for stream "stream". */

void mrandst(double* seed, int stream)
{
int i;
    for (i = 0; i <= 5; ++i) drng[stream][i] = seed[i];
}

/* Get seed vector for stream "stream". */

void mrandgt(double* seed, int stream)
{
int i;
    for (i = 0; i <= 5; ++i) seed[i] = drng[stream][i];
}
