#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
double u,g,w,v;
cout <<"u=";
cin >>u;
cout <<"g=";
cin >>g;
w=sin(u-2*g)+exp(g)*sqrt(u+g);
v=(pow(g-2u,2))-u*cos(g)/(3-4*u);
cout <<"w="<<w<< endl;
cout <<"v="<<v<< endl;
	return 0;
}
