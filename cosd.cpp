#include<iostream>
using namespace std;
struct Boy
{
	int age;
	string name;
};
int main()
{
	while(true)
	{
		Boy Sd;
		cout<<"Enter Your Name"<<endl;
		cin>>Sd.name;
		cout<<"Enter Your Age"<<endl;
		cin>>Sd.age;
		cout<<"Your Name Is "<<Sd.name<<endl;
		cout<<"Your Age Is"<<Sd.age<<endl;
		
	}
	return 0;
}
