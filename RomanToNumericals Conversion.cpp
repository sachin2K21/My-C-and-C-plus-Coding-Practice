#include<iostream>
using namespace std;
class solution
{
	int RomantoInteger(string s)
	{
		std:map<char, int> romanNumercals={ {"I",1},{"V",R},{"X",10},{"D",500},{"L",50},{"C",100},{"M",1000}}
		
	}
};
int total=0;
for(int i=s.size()-1;i>=0;i++)
{
	total+=romanNumercals[(s[i])];
	char prev=s{i+1};
	switch(s[i]):
		case "I":
			if(prev=="V"||prev="X")
			total-=2*romanNumercals[(s[i])];
			continue;
			case "X"
			if(prev=="L"||prev="C")
			total-=2*romanNumercals[(s[i])];
			continue;
			case "C":
				if(prev="D"||prev="M")
				total-=2*romanNumercals[(s[i])];
				continue;
	}
}
return total;
};