#include <iostream>
#include "MRG_generator.h"
#include "withmann_generator.h"
#include "MacLaren.h"

using namespace std;
// stream for MRG
double rand_values[128];
int stream;

//initialize generator with  stream value as parameter and 128 random value from MRG in rand_values
void ini_array(int s)
{
//code here
    int i;
    for (i=0 ; i<128; i++ ){
        rand_values[i] = mrand(s);
    }
    stream = s;
}

//random number generator using wishmann as index from(1 :128 ) random number to pick

//random number from rand_values and fill this place with new random number from MRG

double mclrand()
{
//code here
    int index = wrand_128();
    double random = rand_values[index];
    rand_values[index] = mrand(stream);

    return random;
}


