#ifndef NEWTON_H_INCLUDED
#define NEWTON_H_INCLUDED
#include "function.h"

using namespace std;

//NEWTON METHOD

double Newton(double r0,double r1,double epsilon)
{
double z;
while((abs(r1-r0)>epsilon)||(abs(f(z))>epsilon)){
z=r1-((f(r1)*(r1-r0))/(f(r1)-f(r0)));
r0=r1;
r1=z;


}
return z;
}


#endif // NEWTON_H_INCLUDED
