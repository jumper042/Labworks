#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double a,b,x,y;
	cout <<"a=";
	cin >>a;
	cout <<"b=";
	cin >>b;
	cout <<"x=";
	cin >>x;
	y=log10(tan(a*x))+(pow((b*x*x),1.0/7.0)/asin(x))-exp(a+x);
	cout <<"y="<<y<< endl;	
	return 0;
}
