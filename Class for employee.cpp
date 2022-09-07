#include<iostream>
using namespace std;
class Employee
{
	private:
		int eid;
		string Name;
		public:
			Employee(int e,string n)
			{
				eid=e;
				Name=n;
			}
			string getName()
			{
				return Name;
			}
			int geteid()
			{
				return eid;
			}
		};
		class fulltimeEmployee:public Employee
		{
			private:
				int salary;
				public:
			fulltimeEmployee(int e,string n,int sal):Employee(e,n)
			{
				salary=sal;
			}
			int getSalary()
			{
				return salary;
			}
		};
		class parttimeEmployee:public Employee
		{
			private:
				int wages;
				public:
			parttimeEmployee(int e,string n,int w):Employee(e,n)
			{
				wages=w;
			}
			int getWages()
			{
				return wages;
			}
			
		};
		int salary;
	
int main()
{
	fulltimeEmployee E1(1,"Sachin",12400);
	parttimeEmployee E2(2,"Salahuddin",3000);
	cout<<"Full salary is "<<E1.getSalary()<<endl;
	cout<<"Part time Salary is "<<E2.getWages()<<endl;
}
