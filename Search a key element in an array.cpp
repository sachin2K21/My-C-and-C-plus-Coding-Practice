#include<iostream>
using namespace std;
int main()
{
	int A[10]={0,1,2,-8,4,-9,56,6,7,8};
	int key;
	cout<<"Enter the key";
	cin>>key;
	for(int i=1;i<10;i++)
	{
		if(key==A[i])
		{
			cout<<"key is "<<i;
		}
	}
	cout<<"Element is not found"<<endl;
	return 0;
}