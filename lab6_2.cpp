#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int i,n,k=0;
	double b;
	cout<<"Kilkist elementiv masivu=";
	cin>>n;
	cout<<"Vvedit b=";
	cin>>b;
	double a[n];
	for(i=1;i<=n;i++)
	{cout<<"a["<<i<<"]="; cin>>a[i];
	}
	if(a[1]<=b)
	{for(i=1;i<=n;i++)
	if(a[i]==0) k+=1;
	cout<<"a[1]<=b, otje, kilkist elementiv, yaki dorivnuut nulu="<<k<<endl;
	}
	else
	{
	double maxvid;
	for(i=1;i<=n;i++)
	{
	if(a[i]<0) 
	{
	maxvid=a[i];
    }
	}
	cout<<"a[1]>b, otje, najbilshyi vidjemnyi element="<<maxvid<<endl;
	}
	return 0;
}


