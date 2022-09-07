#include<iostream>
using namespace std;
int main()
{
	int A[10]={0,1,2,3,4,54,56,6,7,8};
	int max=INT_MIN;
	for(int i=0;i<10;i++){
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	cout<<"Maximum number is "<<max;
	return 0;
}