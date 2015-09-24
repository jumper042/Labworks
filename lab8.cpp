#include <iostream>
#include <string.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{	
	cout<<"Input text:"<<endl;
	char str[100];
	int a=0,b=0,c=0,d=0;
	gets(str);
	for(int i=0; i<strlen(str);i++)
{
	if (str[i]=='+') a++;
	if (str[i]=='-') b++;
	if (str[i]=='=') c++;
	if (str[i]=='*') d++;
}
	cout<<"Count of +:"<<a<<endl;
	cout<<"Count of -:"<<b<<endl;
	cout<<"Count of =:"<<c<<endl;
	cout<<"Count of *:"<<d<<endl;
	puts(str);
	
	return 0;
}
