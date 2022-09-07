#include<iostream>
using namespace std;
class Demo
{
	public:
			int *p;
		Demo()
		{
		
		
			p=new int[10];
			cout<<"Contruction of demo"<<endl;
		}
		~Demo()
		{
			delete []p;       // this is for deleting the data which is in construction demo.
			cout<<"Destruction of demo"<<endl;
		}
};
int main()
{
	Demo *p=new Demo(); // it will call demo  cponsttruction only because Object pointed only Demo. and it is store in heap
	delete p; // Due to this line only destructor will call here and it will delete heap memory
}