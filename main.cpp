#include <iostream>
#include <fstream>
#include <string>
#include "withmann_generator.h"
#include "MRG_generator.h"
#include "MacLaren.h"
using namespace std;

int main()
{
    //initilaize maclaren generator with seed 1
    ini_array(1);
    double x;
    cout.precision(10);
    cout<<"wichmann\tMRG32k3a \tMaclaren"<<endl ;
    for(int i =0 ; i<500; i++)
    {
     cout<<wrand()<<"\t"<<mrand(2)<<"\t"<<mclrand()<<endl;

    }
    return 0;
}
