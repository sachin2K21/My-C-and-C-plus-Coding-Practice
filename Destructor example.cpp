#include<iostream>
using namespace std;
class test
{
	public:
	test()
	{
		cout<<"test created"<<endl;
	}
	~test()
	{
		cout<<"test deleted";
	}
};
int main()
{
	test *p=new test(); // it will call constructor functionn and show only test created
	delete p; // it will call destructor function and show test deleted and test created
	return 0;
}
// Second exmaple  of destructor
//class test
//{
// public:
//	int *p;
//	ifstream fis;
//	test()
//	{
//		p=new int[10]; // inside contructor memory is allocated
//		fis.open("my.file"); //inside constriuctor file is opened
//	}
//	~test()
//	{
//		delete []p;      // inside destructor memmory is allocated
//		file.close();     // inside destructor file is closed
//	}
//};
//int main()
//{
//test t;
//}