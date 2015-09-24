#include <iostream>
#include <math.h>
#define a 1
#define c 2
#define n 2
#define m 2
using namespace std;

double x(double b[n][m], int i)
{
	int j;
	double xi=0;
	for (j=0; j<m;j++)
{
	xi+=a*b[i][j]+c*b[i][j];
}
	return (xi);
}
	void input (double b[n][m])
{
	int i,j;
	for (i=0; i<n; i++)
	for (j=0; j<m;j++)
{ 
	cout<<"b["<<i+1<<"]["<<j+1<<"]=";
	cin>>b[i][j];
}
}
	int main(int argc, char *argv[]) 
{
	double F=0, b[n][m],dob=1;
	int i,j;
	input (b);
	for (i=0; i<n; i++)
{
	dob*=x(b,i);
} 
	F=a+dob;
	cout<<"F="<<F<<endl;
	return 0;
}
