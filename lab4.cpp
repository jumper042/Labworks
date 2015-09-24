#include <iostream>
#include <math.h>
#define a 2.1
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv)
{
double S=0;
int i,n;
cout <<"N="; 
cin >>n;
for (i=1; i<=n; i++)
{
S+=pow(1/i,2)+pow(a,i);
}
cout <<"S="<<S<<endl;
return 0;
}
