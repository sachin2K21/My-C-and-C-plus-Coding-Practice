#include<iostream>
using namespace std;
int main()
{
	int n,r,rev=0,num;
	cout<<"Enter Number";
	cin>>n;
	num=n;
	do
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	while(n != 0);
		cout<<"Reverse number is "<<rev<<endl; 
		if(num == rev)
		cout<<"number is pelindrom";
		else
		cout<<"it's not a pelindrom number";
		return 0;
}