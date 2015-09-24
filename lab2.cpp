#include <iostream>
#include <math.h>
#define C 1.231
#define D 1.152
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
double x,y,A;
cout <<"x=";
cin >>x;
cout <<"y=";
cin >>y;
if (x<=y) A=log10(y)+D*x; else A=tan(C)+x*exp(y);
cout <<"A="<<A<<endl;
	return 0;
}
