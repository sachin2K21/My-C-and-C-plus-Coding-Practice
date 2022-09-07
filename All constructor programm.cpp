#include<iostream>
using namespace std;
class Rectangle
{
	private:
	int length;
	int breadth;
	public:
		void setlength(int l)
		{
			if(l<0)
			length=1;
			else
			length=l;
		}
		void setbreadth(int b)
		{
			if(b<0)
			breadth=1;
			else
			breadth=b;
		}
	int	getlength()
		{
			return length;
		}
	int	getbreadth()
		{
			return breadth;
		}
		int area()
		{
			return length*breadth;
		}
		int parameter()
		{
			return 2*(length+breadth);
		}
		//unparameterized contructor
		Rectangle()
		{
			length=1;
			breadth=1;
		}
		//parameterised constructor
		Rectangle(int l, int b)
		{
			setlength(l);
			setbreadth(b);
		}
		//copy constructor
		Rectangle(Rectangle &r)
		{
			length=r.length;
			breadth=r.breadth;
		}
	};
		//main programm
		int main()
		{
			Rectangle r1;
			cout<<r1.area()<<endl;
			Rectangle r2(5,10);
			cout<<r2.area()<<endl;
			//copy constructor
			Rectangle r3(r2);
			cout<<r3.area();
			return 0;
		}
		
