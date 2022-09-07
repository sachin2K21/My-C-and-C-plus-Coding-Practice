#include <iostream>
using namespace std;

//* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int A[]={1,2,3,4,5,6,7,8};
	int sum=0;
	for(auto x:A)
	{
		sum=sum+x;
		
	}
	cout<<sum<<endl;
	return 0;
}