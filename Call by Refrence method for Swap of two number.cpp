#include<iostream>
using namespace std;
 void swap(int &a, int &b)
 {
 	cout<<&a<<" "<<&b<<endl;
 	int temp;
 	temp=a;
 	a=b;
 	b=temp;
 }
 int main()
 {
 	int x=4,y=2;
 	swap(x,y);
 	cout<<"x="<<x<<" "<<"y="<<y<<endl;
	return 0;
}