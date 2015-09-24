#include <iostream>
#include <math.h>
#define a 3.18
#define x 2.64
#define y 3.27
#define z 2.64
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
double p(double k)
{
	double p;
	p=(tan(a*k)+sin(k));
	return p;
}
int main(int argc, char** argv) 
{
	double F;
	F=sin(p(x))/sqrt(x+p(y))+pow(p(z),2)/(2*x)-y*log(x);
	cout<<"F="<<F<<endl;
	return 0;
}
