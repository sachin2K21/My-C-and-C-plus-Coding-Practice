//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> v={3,4,5,6,7};
//	v.push_back(8);
//	v.push_back(9);
//	vector<int>::iterator itr ;    // iterator class belongs to vector class with itr object of iterator
//	cout<<"Using Iterator "<<endl;
//	for(itr=v.begin();itr!=v.end();itr++)
//	cout<<++*itr<<endl;
//	cout<<"Using for each loop "<<endl;
//	for(int x:v)
//{
//
//		cout<<x<<endl;
//}
//}


// Program using List template

//#include<iostream>
//#include<list>
//using namespace std;
//int main()
//{
//	list<int> v={3,4,5,6,7};
//	v.push_back(8);
//	v.push_back(9);
//	list<int>::iterator itr ;
//	cout<<"Using Iterator "<<endl;
//	for(itr=v.begin();itr!=v.end();itr++)
//	cout<<++*itr<<endl;
//	cout<<"Using for each loop "<<endl;
//	for(int x:v)
//{
//
//		cout<<x<<endl;
//}
//}

// program using forward list template

//#include<iostream>
//#include<forward_list>
//using namespace std;
//int main()
//{
//	forward_list<int> v={3,4,5,6,7};
//	v.push_front(8);
//	v.push_front(9);
//	forward_list<int>::iterator itr ;
//	cout<<"Using Iterator "<<endl;
//	for(itr=v.begin();itr!=v.end();itr++)
//	cout<<++*itr<<endl;
//	cout<<"Using for each loop "<<endl;
//	for(int x:v)
//{
//
//		cout<<x<<endl;
//}
//}

// program using set template
// using set template we can't modified values like forward list and vector

//#include<iostream>
//#include<set>
//using namespace std;
//int main()
//{
//	set<int> v={3,4,5,6,7};
//	v.insert(8);
//	v.insert(9);
//	set<int>::iterator itr ;
//	cout<<"Using Iterator "<<endl;
//	for(itr=v.begin();itr!=v.end();itr++)
//	cout<<*itr<<endl;                            // using set template we can't modified values like forward list and vector
//	cout<<"Using for each loop "<<endl;
//	for(int x:v)
//{
//
//		cout<<x<<endl;
//}
//}
#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,string> m;
	m.insert(pair<int,string>(1,"Sachin"));
	m.insert(pair<int,string>(2,"Salahuddin"));
	m.insert(pair<int,string>(3,"Pratik"));
	map<int,string>::iterator itr;
	for(itr=m.begin();itr!=m.end();itr++) 
	{
		cout<<itr->first<<" "<<itr->second<<endl;
	}
	map<int,string>::iterator itr1;
	itr1=m.find(2);   // this is to find the element
	cout<<"Value found is "<<endl;
	cout<<itr1->first<<" "<<itr1->second<<endl;
}