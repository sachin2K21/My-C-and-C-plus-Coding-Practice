#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream ifs("My.txt");
if(ifs)cout<<"file is opened"<<endl; //if(ifs.is_open())cout<<"file is opened";
string name;
int roll;
string branch;
ifs>>name>>roll>>branch;
ifs.close();
cout<<"Name of the student "<<name<<endl;
	cout<<"Roll no of the student "<<roll<<endl;
	cout<<"Branch of the student "<<branch<<endl;
}
