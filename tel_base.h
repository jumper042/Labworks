#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct abonent	
{ 
	int number;
	char name[30];
	char surname[30];
	char address[50];
};

FILE * f_abon;
char file_name[25];

void file_connect()
{	
	cout<<"Input the name of file"<<endl;
	cout<<"If the file doesn't exist, there will be created one with such name"<<endl;
	
	cout<<"Name of file:";
	cin>>file_name;
	if ((f_abon=fopen(file_name,"rb+"))==NULL)
 	{
 	if ((f_abon=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"Impossible to create a file!"<<endl;
	}
		cout<<"Database file has been created!"<<endl;
 	}
}

void input_stud()
{
	setlocale(LC_ALL,"");
	fseek(f_abon,0,SEEK_END);
	struct abonent a;
	cout<<"Input the info about subscriber"<<endl;
	cout<<"Number:";cin>>a.number;getchar();
	cout<<"Surname:"; gets(a.surname);
	cout<<"Name:"; gets(a.name);
	cout<<"Address:"; gets(a.address); cout<<endl;
	fwrite(&a,sizeof(a),1,f_abon);
}


void print_stud(struct abonent a)
{
	cout<<a.number<<"           "<<a.surname<<"           "<<a.name<<"          "<<a.address<<endl;
	cout<<endl;
}


 
void search_address()
{
 char address_stud[30];
 struct abonent a;
 int p,r,number;
 	p=0;
	cout<<"Number for search: ";
	cin>>number;getchar();
	cout<<"Address for search: ";
	gets(address_stud);
	
	cout<<endl;
	fseek(f_abon,0,0);
	cout<<"#   "<<"Number"<<"           "<<"Surname"<<"           "<<"Name"<<"           "<<"Address"<<endl<<endl;
	while (!feof(f_abon))
	{
		r=fread(&a,sizeof(a),1,f_abon);
		if (r<1) break;
		if ((strcmp(a.address, address_stud)== 0)&&(number==a.number))
		{
			cout<<p+1<<"   ";print_stud(a);
			p++;
		}
	}
	if (p==0) cout<<"Such address wasn't found!"<<endl;
	else cout<<endl<<"Found "<<p<<" subscriber(s)!"<<endl<<endl;
}
 
void search_number()
{
 int number;
 struct abonent a;
 int p,r;
 	p=0;
	cout<<"Number: ";
	cin>>number;
	cout<<endl;
	fseek(f_abon,0,0);
	cout<<"#   "<<"Number"<<"           "<<"Surname"<<"           "<<"Name"<<"           "<<"Address"<<endl<<endl;
	while (!feof(f_abon))
	{
		r=fread(&a,sizeof(a),1,f_abon);
		if (r<1) break;
		if (number==a.number)
		{
			cout<<p+1<<"   ";print_stud(a);
			p++;
		}
	}
	if (p==0) cout<<"Such number wasn't found"<<endl;
	else cout<<endl<<"Found "<<p<<" subscriber(s)!"<<endl<<endl;
}


void show_all()
{
 struct abonent a;
 int p,r;
 	p=0;
	fseek(f_abon,0,0);
	cout<<"Database:"<<endl<<endl;
	cout<<"#   "<<"Number"<<"           "<<"Surname"<<"           "<<"Name"<<"           "<<"Address"<<endl<<endl;
	while (!feof(f_abon))
	{
		
		r=fread(&a,sizeof(a),1,f_abon);
		if (r<1) break;cout<<p+1<<"   ";
		print_stud(a);
		p++;
	}
	cout<<endl<<"Found "<<p<<" subscribers!"<<endl<<endl;
}

 
void clear_file()
{
	setlocale(LC_ALL,"");
	fclose(f_abon);
	if ((f_abon=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"Impossible to create a file!"<<endl;
	}
}

void red_base()
{
	abonent a;
	int x,k,number,flag=0;
	char w[30], e[30], y[30];
		show_all();
	cout << "Input number of subscriber for info edit: ";
	cin >> number;
	fseek(f_abon,0,SEEK_SET);
	while (!feof(f_abon))
	{
		if (a.number==number)
		        {
			    z:
			    	system("cls");
			    	
			    cout << "What do you want to change?\n\n1 - Surname\n2 - Name\n3 - Address\n4 - Number\n5 - Delete the info\n0 - Exit\n";
				cin >> k;
				switch (k){
				case 1: cout << "Input new surname: "; cin>>w; strcpy(a.surname, w);flag=1; break;
				case 2: cout << "Input new name: "; cin>>e; strcpy(a.name, e);flag=1;break;				
				case 3: cout << "Input new address: "; cin>>y; strcpy(a.address, y);flag=1; break;
				case 4: cout << "Input new number: "; cin>>x; a.number=x;flag=1; break;
				case 5: cout << "The info has been deleted!"; strcpy(a.surname,"------");strcpy(a.name,"------");strcpy(a.address,"------");flag=1; break;
				case 0: goto p;
				}
                goto z;
                p:k = ftell(f_abon);
                fseek(f_abon, k - sizeof(abonent), 0);
                fwrite(&a, sizeof(abonent), 1, f_abon);
                fseek(f_abon, sizeof(abonent), SEEK_CUR);
		        }	
		fread(&a, sizeof(abonent), 1, f_abon); if(flag==1){cout << "The info of subscriber with number "<<number<<" has been changed!" << endl;show_all();flag=0;}
	}
	cout<<"Press any key";
	getch();
	system("cls");
	}
