#include <iostream>
#include <math.h>
#define p(k) (tan(a*k)+sin(k))
#define a 3.18
#define x 2.64
#define y 3.27
#define z 2.64
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	double F;
	F=sin(p(x))/sqrt(x+p(y))+pow(p(z),2)/(2*x)-y*log(x);
	cout<<"F="<<F<<endl;
	return 0;
}
