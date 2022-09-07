#include<iostream>
using namespace std;
int & fun(int &x)
{
	return x;
}
int main()
{
 int a=20;
 fun(a)=30;
 cout<<a<<endl;
	return 0;
}