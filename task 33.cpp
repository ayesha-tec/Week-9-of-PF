#include<iostream>
using namespace std;
int main()
{
	int N,sum = 0;
	cout<<"enter a num:";
	cin>>N;
	
	for(int i=1;i<=N;i++)
	{
		sum += i;
	
	}
	cout<<"sum ="<<sum;
	return 0;
	

	}