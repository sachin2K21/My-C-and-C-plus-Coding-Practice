#include<iostream>
using namespace std;
int main()
{
	int n,r;
	cout<<"Enter A Number";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		cout<<r;
	}
	cout<<endl;
		switch(r)
		{
			case 1:cout<<"one";
			break;
			case 2:cout<<"Two";
			break;
			case 3:cout<<"Three";
			break;
			case 4:cout<<"four";
			break;
			case 5:cout<<"five";
			break;
			case 6:cout<<"Six";
			break;
			case 7:cout<<"Seven";
			break;
			case 8:cout<<"Eight";
			break;
			case 9:cout<<"Nine";
			break;
			
		}
	
	
		
	

	return 0;

}