class Rectangle
{
	public:
	int length;
	int breadth;
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
	Rectangle *ptr;
	ptr=&r;
	ptr->length=2;
	ptr->breadth=3;
	cout<<ptr->area()<<endl;
	cout<<ptr->perimeter()<<endl;
	return 0;
}