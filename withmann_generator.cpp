#define m1 30269
#define m2 30307
#define m3 30323
#define a1 171
#define a2 172
#define a3 170

int s1 = 50 , s2= 75312 , s3= 3524256;

//change seeds values
void wrand_seeds(int x1 , int x2 , int x3)
{
    s1 = x1;
    s2 = x2;
    s3 = x3;
}

//generate random number using 3 LCG generators (U1 + U2 + U3 ) and take fractional part , update seeds
double wrand(){
// code here
double x1,x2,x3,u1,u2,u3,utemp,u;
x1 = (a1 * s1) % m1;
x2 = (a2 * s1) % m2;
x3 = (a3 * s3) % m3;

u1 = x1 / m1;
u2 = x2 / m2;
u3 = x3 / m3;

utemp = u1+u2+u3;
u = utemp - (int)utemp;

//while(out>0) --out;

wrand_seeds(x1,x2,x3);

return u;

}


//return UNIFORM(0 , 127 ) integer
int wrand_128(){
//code here
double uni_integer;
uni_integer = wrand()*127;
return (int)uni_integer;
}
