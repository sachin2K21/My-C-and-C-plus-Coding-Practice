#include<iostream>
using namespace std;
int main()
{
	int i;
int A[5]={2,4,6,8,10};
int *p=A;
int *q=&A[3];
cout<<p<<endl;
for(i=0;i<5;i++)
{
     
     cout<<*p<<endl;
     p++;
 }
 cout<<p<<endl;
	return 0;
}