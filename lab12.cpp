#include <iostream>
#include <stdio.h>

using namespace std;
void enter()
{
	int n;
	printf("Choose the count of books\n");
	scanf("%d",&n);
	char ctrl[1];
	gets(ctrl);
	FILE * list;
	int i;
    char name[100],count[100],given[100],left[100];
    list = fopen ("list.txt","at");
    for(i=1;i<=n;i++)
{
	 puts("Name of book:");
     gets(name);
     fprintf (list, "Name of book #%d -%s.",i,name);
     puts("Total count of books:");
     gets(count);
     fprintf (list, "Total count of books #%d -%s.",i,count);
     puts("Count of given books:");
     gets(given);
     fprintf (list, "Count of given books #%d -%s.",i,given);
     puts("Count of left books");
     gets(left);
     fprintf(list, "Count of left books #%d -%s.",i,left);
 	}
   fclose (list);
   printf("The information has been inputed succesfully \nYou are brought back to the main menu\n \nChoose an option:\n");
}
void read()
{
	char s[10000];
	FILE * list;
	list = fopen ("list.txt","rt");
	fgets(s,10000,list);
	printf("%s\n",s);
	fclose (list);
memset(s,' ',10000);
printf("The file content is shown above \nYou are brought back to the main menu\n \nChoose an option:\n");
}
void clear()
{
	FILE * list;
	list = fopen ("list.txt","wt");
	fclose (list);
	printf("The cleaning option has been successfully completed \nYou are brought back to the main menu\n \nChoose an option:\n");
}
int main() 
{	
	printf("Options:\n1.Input the information into the file.\n2.Show the content of file.\n3.Clean up the file.\n4.Exit.\nChoose an option:\n");	
	int i;
	do
	{
		cin>>i;
		if(i==1)enter();
		if(i==2)read();
		if(i==3)clear();
	}
	while(i!=4);
   return 0;
}
