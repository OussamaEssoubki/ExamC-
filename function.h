#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include "Initialization.h"

using namespace std;

//WE SEARCH THE ZERO VALUE OF THIS FUNCTION

double f(double r)
{
double func;
func=((c/r)*pow(1+r,1-d))+((FV-(c/r))*(1/(pow(1+r,N+d))))-PV;
return func;
}



#endif // FUNCTION_H_INCLUDED
