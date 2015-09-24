#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct books
{
    char name[100];
	char count[30];
	char given[30];
	char year[30];
};
	FILE *textbooks;
	const char file_name[]="textbooks.bin";
	
int Input_info()
{
	struct books b;
	cout<<"Name of book: ";
	gets(b.name);
	cout<<"Total count of books: ";
	gets(b.count);
	cout<<"Count of given books: ";
	gets(b.given);
	cout<<"Year of issue: ";
	gets(b.year);
	fseek(textbooks,0,2);
	fwrite(&b,sizeof(b),1,textbooks);
	return 0;
	}
	
int print_book(struct books b)
{
	cout<<"Name of book: "<<b.name<<endl;
	cout<<"Total count of books: "<<b.count<<endl;
	cout<<"Count of given books: "<<b.given<<endl;
	cout<<"Year of issue: "<<b.year<<endl;
	return 0;
}

int print_for_search(struct books b)
{
	cout<<"Name of book: "<<b.name<<endl;
	cout<<"Year of issue: "<<b.year<<endl;
	return 0;
}

int search_year()
{
	char issue_year[30];
	struct books b;
	int s,k;
	s=0;
	cout<<"Year for search: ";
	gets(issue_year);
	fseek(textbooks,0,0);
	while (!feof(textbooks))
	{
		k=fread(&b,sizeof(b),1,textbooks);
		if (k<1) break;
		if (strcmp(b.year,issue_year)==0)
		{
			print_for_search(b);
			s++;
		}
	}
	if (s==0) cout<<"No books with such year of issue"<<endl;
	else cout<<endl<<"Found "<<s<< " books with this year"<<endl;
	return s;
}

int show_list()
{
 struct books b;
 int s,k;
 	s=0;
	fseek(textbooks,0,0);
	while (!feof(textbooks))
	{
		k=fread(&b,sizeof(b),1,textbooks);
		if (k<1) break;
		print_book(b);
		s++;
	}
	cout<<endl<<"Found  "<<s<<" books"<<endl<<endl;
        return s;
}

int clear_file()
{
	fclose(textbooks);
	if ((textbooks=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"You can not create the list"<<endl;
 		return -1;
	}
	return 0;
}

int main() 
{
	char d;
 	if ((textbooks=fopen(file_name,"rb+"))==NULL)
 	{
 	if ((textbooks=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"You can not create the list"<<endl;
 		return -1;
	}
		cout<<"The list is created"<<endl;
 	}
 	do
 	{
 		cout<<"Select mode"<<endl;
 		cout<<"1 - Input info"<<endl;
		cout<<"2 - Search for year"<<endl;
		cout<<"3 - Show the list"<<endl;
		cout<<"4 - Clear the list"<<endl;
 		cout<<"5 - Exit"<<endl;
 		d=getch();
 		switch(d)
 		{
			case '5': cout<<"Work is completed"<<endl;
			 fclose(textbooks);
			return 0;
 		 	case '1': Input_info(); break;
 	 		case '2': search_year(); break;
      		case '3': show_list(); break;
      		case '4': clear_file(); break;
 	 	}
 	} while (1);	
}


