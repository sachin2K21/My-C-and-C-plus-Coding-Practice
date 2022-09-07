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
			length=l;
			if(l<0)
			length=1;
			else
			length=l;
		}
		void setbreadth(int b)
		{
			breadth=b;
			if(b<0)
			breadth=1;
			else
			breadth=b;
		}
		int getlength()
		{
			return length;
		}
		int getbreadth()
		{
			return breadth;
		}
		int area()
		{
			return length*breadth;
		}
	 int perimeter()
	{
		return 2*(length+breadth);
	}
	};
	int main()
	{
		Rectangle r;
		r.setlength(10);
		r.setbreadth(20);
		cout<<"Lentgh is "<<r.getlength()<<endl;
		//cout<<"Breadth is "<<r.getbreadth()<<endl:
		cout<<"Area is "<<r.area();
	//	cout<<"Perimeter is "<<r.perimeter;
		return 0;
	}
