#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int A[2][3]={2,5,6,3,5,6};
	
	for(auto& x:A)
	{
		for(auto& y:x)
	{
		cout<<y<<" ";
	}
	cout<<endl;
	}
	return 0;
}