#include<iostream>
using namespace std;
 class Base
{
	public:
	virtual void fun()
		{
			cout<<"Fun of display";
		}
};
class Derived:public Base
{
	public:
	void fun()
	{
		cout<<"Diplay of derived";
	}
};
int main()
{
	// For direct calling derive class fun function
//	Derived d;
//	d.fun();
// For virtual base function fun
	Derived d;
	Base *ptr=&d;
	ptr->fun();
}