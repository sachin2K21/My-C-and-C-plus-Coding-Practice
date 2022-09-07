#include<iostream>
using namespace std;
int main()
{
	int i,x,n;
	cout<<"Enter the Number";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		x=n*i;
		cout<<i<<" "<<n<<"*"<<i<<"="<<x<<"\n";

	}
	
	return 0;
}