#include<iostream>
#include<fstream>
using namespace std;
class store
{
	private:
		string name;
		int price;
		int quantity;
		public:
			store()
			{
				
			}
		store(string n,int p,int q)
		{
			name=n;
			price=p;
			quantity=q;
		}
		friend ifstream & operator>>(ifstream &ifs, store &s);
};
ifstream & operator>>(ifstream &ifs, store &s)
{
	ifs>>s.name;
	ifs>>s.price;
	ifs>>s.quantity;
	return ifs;
}
int main()
{
	store s1;
	ifstream ifs("Store.txt", ios::trunc);
	 //ifs>>s1;
	cout<<"Name is "<<s1.name<<endl;
	cout<<"Price is "<<s1.price<<endl;
	cout<<"Quantity is "<<s1.quantity<<endl;
	ifs.close();
//	cout<<"name is "<<s.sachin;
}
