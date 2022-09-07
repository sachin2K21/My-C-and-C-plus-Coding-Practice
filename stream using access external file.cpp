#include<iostream>
#include<fstream>
using namespace std;
 // writing in a file
//int main()
//{
//	ofstream of("My.txt",ios::trunc);
//	of<<"Sachin_Kumar"<<endl;
//	of<<207<<endl;
//	of<<"Electrical Enginneering";
//	of.close();
//}

// Reading form the file
int main()
{
	ifstream ifs("My.txt");
	string name;
	int roll;
	string subject;
	ifs>>name>>roll>>subject;
	ifs.close();
	cout<<"Name is "<<name<<endl;
	cout<<"Roll No is "<<roll<<endl;
	cout<<"Branch is "<< subject; 
}