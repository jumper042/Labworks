#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double S=0;
	int i, n;
	do {cout <<"Kilkist elementiv masivu n="; cin >>n;} while (n<=1);
	double a[n];
	for (i=0; i<n; i++)
	{cout <<"a["<<i+1<<"]="; cin >>a[i];
	if (i % 2) S+=a[i];}

	cout <<"Suma dorivnye="<<S<<endl;

	return 0;
}
