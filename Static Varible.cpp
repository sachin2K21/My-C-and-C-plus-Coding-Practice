#include<iostream>
using namespace std;
void fun()
{
	static int v=0;
  static int a=5;
	v++;
	a++;
	cout<<a<<" "<<v<<endl;
}
main()
{
	fun();
	fun();
	fun();
	return 0;
}