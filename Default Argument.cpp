#include<iostream>
using namespace std;
template<class T>
T maxim(T x,T y, T z=0)
{
 if(x>y && x>z)
 return x;
 else if(y>z)
 return y;
 else 
 return z;
}
int main()
{
	cout<<maxim(13, 12)<<endl;
	cout<<maxim(2.3f, 3.6f,44.5f)<<endl;
	cout<<maxim(2.3, 5.7)<<endl;
	return 0;
}