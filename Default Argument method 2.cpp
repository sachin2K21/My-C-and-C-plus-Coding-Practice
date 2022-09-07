#include<iostream>
using namespace std;
template<class T>
T maxim(T x,T y, T z=0)
{
 return x>y && x>z ? x:y>z?y:z;
}
int main()
{
	cout<<maxim(13, 12)<<endl;
	cout<<maxim(2.3f, 3.6f,44.5f)<<endl;
	cout<<maxim(2.3, 5.7)<<endl;
	return 0;
}