#ifndef MRG_GENERATOR_H_INCLUDED
#define MRG_GENERATOR_H_INCLUDED

double mrand(int stream);
void mrandst(double* seed, int stream);
void mrandgt(double* seed, int stream);

#endif // MRG_GENERATOR_H_INCLUDED
