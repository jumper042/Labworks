#include <iostream>
#include "tel_base.h"
#include <stdlib.h>
using namespace std;



int main() 
{
	char c;
	file_connect();
	system("cls");
 	cout<<"English letters only!"<<endl;
 	do
 	{
 		cout<<"Choose an option:"<<endl;
 		cout<<"1 - Input the info about subscriber"<<endl;
 		cout<<"2 - Search for number and address"<<endl;
		cout<<"3 - Show the database"<<endl;
		cout<<"4 - Full database clean"<<endl;
		cout<<"5 - Edit database"<<endl;
		cout<<"6 - Search for number"<<endl;
 		cout<<"9 - Connect another file"<<endl;
		cout<<"0 - Exit"<<endl<<endl;
 		c=getch();
 		switch(c)
 		{
		case '0': cout<<"Роботу завершено"<<endl;
		fclose(f_abon); return 0;
 		case '1': system("cls");input_stud();break;
		case '2': system("cls");search_address(); break;
      	case '3': system("cls");show_all(); break;
      	case '4': system("cls");clear_file();break;
      	case '5': system("cls");read_base(); break;
		case '6': system("cls");search_number();break;
      	case '9': system("cls");file_connect(); break;
 	 	}
 	} while (1);	
}
