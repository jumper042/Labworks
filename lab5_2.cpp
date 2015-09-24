#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{double x,y,a,b,c;
cout <<"Pochatok="; cin >>a;
cout <<"Kinets="; cin >>b;
cout <<"Krok="; cin >>c;
x=a;
do
{y=sin(x)+exp(2*x)-tan(x);
cout <<"x="<<x<<"     y="<<y<<endl;
x+=c;} while (x<=b); 
	return 0;
}
