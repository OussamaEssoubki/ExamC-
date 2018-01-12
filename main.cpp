#include "Newton.h"
#include "Initialization.h"



using namespace std;


int main()
{

//Variables (extern is used to have a general variable, available in all headers)
extern double c;  // coupon value
extern double FV; // face (future) value of a bond
extern double PV; // present value of a bond (its price)
extern double N; // number of full years until maturity
extern double d; // year fraction until next coupon payment
double eps; // tolerance for Newton modification method
double rmax; // initial value for Newton method
double rmin; // initial value for Newton method
double YTM; // yied to maturity

//NEWTON METHOD ARGUMENTS
rmax=1;
rmin=0.01;
eps=0.00001;

//DATA
c=2.625;
d=0.42;
FV=100;
PV=105.5;
N=2;

// RESULTS
YTM=Newton(rmin,rmax,eps);
cout << "By Newton modification, we find : YtM=" << YTM << endl;

// IF YTM IS WRONG
cout << "If YTM=NaN, The value of rmin and rmax are not good, I suggest you to choose around those values :" << endl;
cout << "rmin= " << ((c+((FV-PV)/(N+d)))/((FV+PV)/2)) - 0.001 << endl;
cout << "rmax= " << ((c+((FV-PV)/(N+d)))/((FV+PV)/2)) + 0.001 << endl;

 return 0;
}
