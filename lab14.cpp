#include <iostream>
#include "__MyFun.h"
using namespace std;

int main() 
{
	int i,j;
	float **a;
    a = new float *[2];
    for (i=0; i<=2 ;i ++)
    a[i] = new float [2];
   
    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    {
    	cout<<"A["<<i+1<<"]["<<j+1<<"]=";
    	cin>>a[i][j];
    }
    float detr;
    detr=det(a);
    cout<<"Det="<<detr<<endl;
   	
}
