#include<iostream>
using namespace std;
int main()
{
	int A[10]={0,1,2,-8,4,-9,56,6,7,8};
	int min=INT_MAX;
	for(int i=0;i<10;i++){
		if(A[i]<min)
		{
			min=A[i];
		}
	}
	cout<<"Minimum number is "<<min;
	return 0;
}