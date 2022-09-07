#include<iostream>
using namespace std;
int main()
{
cout<<"Menu\n";
cout<<"1. ADD\n"<<"2. SUB\n"<<"3. MULT\n"<<"4. DIV\n";
int option;
cout<<"Choose your option";
cin>>option;
int a,b;
float c;
cout<<"Enter two number";
cin>>a>>b;
switch(option)
{
	case 1: c=a+b;
	break;
	case 2: c=a-b;
	break;
	case 3: c=a*b;
	break;
	case 4: c=a/b;
	break;
}
cout<<"Result is:"<<c;
	return 0;
}