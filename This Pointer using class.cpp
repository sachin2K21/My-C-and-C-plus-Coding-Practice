#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
		public:
			Rectangle(int length, int breadth)
			{
				this->breadth=breadth;
				this->length=length;
			}
			int area()
			{
				return length*breadth;
			}
			int parameter()
			{
				return 2*(length+breadth);
			}
};
int main()
{
	Rectangle r(10,30);
	cout<<"Area is "<<r.area()<<endl;
	cout<<"Parameter is "<<r.parameter();
	return 0;
}