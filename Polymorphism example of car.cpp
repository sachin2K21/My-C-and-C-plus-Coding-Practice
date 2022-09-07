#include<iostream>
using namespace std;
class car
{
	public:
virtual	void start()=0;
virtual	void stop()=0;
};
class Innova:public car
{
	void start()
	{
		cout<<"Innova started"<<endl;
	}
	void stop()
	{
		cout<<"Innova stoped"<<endl;
	}
};
class Toyota:public car
{
	void start()
	{
		cout<<"Toyota Started"<<endl;
	}
	void stop()
	{
		cout<<"Toyota Stopped";
	}
};
int main()
{
	car *c=new Innova();
	c->start();
	c=new Toyota();
	c->start();
}