#include<iostream>
using namespace std;
class test
{
	public:
	int a;
	int *p;
	test(int x)
	{
		a=x;
		p=new int[a];
	}
	test(test &t)
	{
		t=t.a;
		p=new int[a];
	}
	
};
int main()
{
	test t(5);
	test t2(t);
}