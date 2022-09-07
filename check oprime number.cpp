#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number to check the prime number"<<endl;
	cin>>n;
    for(int i=2;i<n/2;i++)
    {
    	if(n/2==0 && n%i==0)
    	{
    		cout<<"It is not prime number"<<endl;
		}
		else
		{
			cout<<"it's a prime number"<<endl;
		}
	}
	return 0;
}