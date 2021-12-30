#include<iostream>
using namespace std;
int main()
{
	int a,b,k[10][10],o[10][10],t,f;
	cout<<"Enter Rows"<<endl;
	cin>>t;
	cout<<"Enter Columns"<<endl;
	cin>>f;
	for(a=0;a<t;a++)
	{
		for(b=0;b<t;b++)
		{
			cin>>k[a][b];
		}
	}
	for(a=0;a<t;a++)
	{
		for(b=0;b<t;b++)
		{
			cin>>o[10][10];
			
		}
	}
	for(a=0;a<t;a++)
	{
		for(b=0;b<t;b++)
		{
			cin>>k[a][b]-o[a][b];
		}
	}
}
