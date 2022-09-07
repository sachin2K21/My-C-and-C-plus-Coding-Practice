#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter two Number";
	cin>>m>>n;
	while(m!=n)
	{
		if(m>n)
		m=m-n;
		else if(n>m)
		n=n-m;
	}
	cout<<m;

		cout<<endl;
	

	return 0;

}