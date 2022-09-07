#include<iostream>
using namespace std;
int main()
{
	int a=10; 
	int b=0;
	int c;
	try
	{
		if(b==0)
		throw 2;
		c=a/b;
		cout<<c<<endl;
	}
	catch(int e)
	{
		cout<<"Divide by zero"<<" error code is "<<e<<endl;
	}
	cout<<"Bye";
}