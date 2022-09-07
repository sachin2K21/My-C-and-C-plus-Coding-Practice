#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Enter the Number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=i+sum;

	}
		cout<<sum;
	
	return 0;
}