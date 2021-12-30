//Write a program in C++ to swap two numbers. 
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter A:"<<endl;
	cin>>a;
	cout<<"Enter B:"<<endl;
	cin>>b;
	c=a;
	a=b;
	cout<<"The After The Swap"<<" "<<" "<<a<<endl;
	b=c;
	cout<<"The After The Swap"<<" "<<" "<<b<<endl;
	return 0;
	
}
