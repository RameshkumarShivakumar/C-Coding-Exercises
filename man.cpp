#include<iostream>
using namespace std;
int main()
{
	int a,b,sk[10][10],gk[10][10],total,tot;
	cout<<"Enter The Number Of Columns"<<endl;
	cin>>total;
	cout<<"Enter The Number Of Rows"<<endl;
	cin>>tot;
	for(a=0;a<total;a++)
	{
		for(b=0;b<tot;b++) 
		{
			cout<<"Enter Value 1:"<<endl;
			cin>>sk[a][b];
			
		}
	}
	for(int a=0;a<total;a++)
	{
		for(int b=0;b<tot;b++)
		{
			cout<<"Enter Value 2:"<<endl;
			cin>>gk[a][b];
		}
	}
	for(int a=0;a<total;a++)
	{
		for(int b=0;b<tot;b++)
		{
			cout<<(sk[a][b]-gk[a][b])<<"s/t";
		}
	}	
	return 0;
}
