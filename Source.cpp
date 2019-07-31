#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"//////////////menu/////////////////"<<endl;
	cout<<"1. Register"<<endl;
	cout<<"2. Login"<<endl;
	cout<<"Q.Exit Program"<<endl;
	int p1,p2;
   string u1,u2;
	char ch;
	do{
	cout <<"Enter Menu: ";
		cin >> ch;
		if (ch == '1')
		{cout<<"***********register********"<<endl;
		cout<<"Input Username : ";
		cin >> u1;
		cout<<"Input Password : ";
		cin>> p1;
}
		else if (ch == '2')
		{cout<<"***********Login**************"<<endl;
		cout<<"Input Username : ";
		cin >> u2;
		cout<<"Input Password : ";
		cin>> p2;
		if (u1== u2 && p1 == p2)
			cout<<"Users name or password correct ^_______^"<<endl;
		else 
		cout<<"Users name or password incorrect Please try agin!!!"<<endl;
		}
		
		
		

		
}while(ch!='Q');		

	
	
	
	
	
	
}	
	
		
		
