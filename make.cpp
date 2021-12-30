#include<iostream>
using namespace std;
/*Write a program in C++ to check 
whether the primitive values crossing the limits or not. Go to the editor*/
int main()
{
	//Checking The Values From Five Members
	string Name;
	int age,members=5;
	while(members>=0)
	{
		cout<<"Enter Your Name:"<<endl;
		cin>>Name;
		cout<<"Enter The Age:"<<endl;
		cin>>age;
		if(age<=18)
		{
			cout<<"Sorry "<<Name<<"\nYou Are Not Qualified For Getting\nThe License For Driving Purpose"<<endl;
			
		}
		else
		{
			cout<<"Congratulations  "<<Name<<"\nYou Are  Qualified For Getting\nThe License For Driving Purpose"<<endl;
		}
		
		members++;
			
	}
	return 0;
}

