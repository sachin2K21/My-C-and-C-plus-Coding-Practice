#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int r1,c1,r2,c2,k;
	int a[10][10], b[10][10],mult[10][10];
	cout<<"Enter the no of rows and column for 1st matrix";
	cin>>r1>>c1;
	cout<<"Enter the no of rows and column for 2nd matrix";
	cin>>r2>>c2;
	if(c1!=r2)
{
	cout<<"Multiplication is not valid";
	return 0;
}
cout<<endl<<" Enter the element of matrix 1"<<endl;
	// srtoring element of a matrix
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<"Enter element of matrix a "<<i+1<<j+1<<":";
			cin>>a[i][j];
		}
	}
	// srtoring element of b matrix
	for(i=0;i<r2;++i)
	{
		for(j=0;j<c2;++j)
		{
			cout<<"Enter the elemnt of b matrix"<<i+1<<j+1<<":";
			cin>>b[i][j];
		}
	}
	// multiplying matrix a and b
	for(i=0;i<r1;++i)
	{
		for(j=0;j<c1;++j)
		{
			mult[i][j]=0;
			for(k=0;k<c1;++k)
			{
				mult[i][j]=a[i][k]*b[k][i];
			}
		}
		// Displaying the multilication of two matrix
		cout<<endl<<"Output Matrix:"<<endl;
		for(i=0;i<r1;++i)
		{
			for(j=0;j<c2;++j)
			{
				cout<<" "<<mult[i][j];
				if(j==c2-1)
				{
					cout<<endl;
				}
				
			}
		}
		
	}
	return 0;
}