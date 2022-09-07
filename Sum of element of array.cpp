#include<iostream>
using namespace std;
int main()
{
	int A[10]={0,1,2,3,4,5,6,7,8,9};
	int i, sum=0;
	for(i=0;i<10;i++)
	{
		sum=sum+A[i];
	}
	cout<<sum<<endl;
return 0;
}