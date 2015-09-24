#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main()
{
    int i,j;
	int m,n;
    cout<<"Kilkist ryadkiv=";
    cin>>m;
    cout<<"Kilkist stovbtsiv=";
    cin>>n;
    double C[m][n],X[m];
    for(i=1;i<=m;i++)
    {
    for(j=1;j<=n;j++)
    {
    cout<<"C["<<i<<"]["<<j<<"]=";
    cin>>C[i][j];
    }
    }
    for(i=1;i<=m;i++)
    {
    for(j=1;j<=n;j++)
    {
	if(C[i][j]>0)
    X[i]+=C[i][j];
    }
    cout<<"X["<<i<<"]="<<X[i]<<endl;
    }
    return 0;
}
