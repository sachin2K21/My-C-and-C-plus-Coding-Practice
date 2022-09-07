#include<iostream>
using namespace std;
int main()
{
	
//	[](){cout<<"Hello Professor";}();
//     cout<<([](int x,int y){return x+y;}(10,4));
int a=([](int x,int y)->int{return x+y;}(10,4));
cout<<a;
}
//	[](int x,int y){cout<<x<<" "<<y;}(4,9);
 //   [](int x,int y){cout<<x+y;}(3,4);
   //  [&x,&y](){cout<<++x<<" "<<++y;}(5,4);
 // [&](int x,int y){cout<<++x<<" "<<++y;}(5,4);
//}
