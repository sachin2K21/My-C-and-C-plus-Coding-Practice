#include<iostream>
#include<fstream>
using namespace std;
class student
	{
		private:
			string name;
			int roll;
			string branch;
			public:
				student()
				{}
				student(string n,int r,string b)
				{
					name=n;
					roll=r;
					branch=b;
				}
				friend ofstream & operator<<(ofstream &ofs,student s);
				friend ifstream & operator>>(ifstream &ifs,student &s);
				friend ostream & operator<<(ostream &os,student &s);
				
	};
	ofstream & operator<<(ofstream &ofs,student s)
	{
		ofs<<s.name<<endl;
		ofs<<s.roll<<endl;
		ofs<<s.branch<<endl;
		return ofs;
	}
	ifstream & operator>>(ifstream &ifs,student &s)
	{
		ifs>>s.name;
		ifs>>s.roll;
		ifs>>s.branch;
		return ifs;
	}
	ostream & operator<<(ostream &os,student &s)
	{
		os<<s.name<<endl;
		os<<s.roll<<endl;
		os<<s.branch<<endl;
		return os;
	}
	int main()
	{
		ofstream ofs("student2.txt");
		student s1("Sachin",207,"Electrical");
		ofs<<s1;
		ofs.close();
		student s2;
		ifstream ifs("student2.txt");
		ifs>>s1;
		cout<<s1;	
	}