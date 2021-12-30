#include<iostream>
using namespace std;
int main()
{
	int a=10,sum=1;
	for(int b=0;b<a;b++)
	{
		sum=sum+b;
		cout<<"The Total Values Are\n"<<sum;
		sum++;
	}
	return 0;
}
