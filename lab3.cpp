#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int A,B,X;
	cout <<"A="; cin >>A;
	cout <<"B="; cin >>B;
	switch (A)
	{case 0: 
	switch (B)
	{case 0: cout <<"X=0"; break;
	case 1: cout <<"X=1"; break;
	} break;
	case 1:
	switch (B)
	{case 0: cout <<"X=1"; break;
	case 1: cout <<"X=0"; break;
	} break;
	default: cout <<"Nepravilno zadani chisla";
	}
	
	return 0;
}
