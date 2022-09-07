#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int A[2][3]={3,2,5,3,4,6};
	int B[2][3]={6,1,2,4,5,1};
	for(int i=0;i<2;i++) 
	{
	for(int j=0;j<3;j++) 
	 {   
	 cout<<A[i][j]*B[i][j]<<" "; 
	  } 
	  cout<<endl;
	  }
	  	return 0;  
	}

