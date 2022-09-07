#include<iostream>
using namespace std;

class Solution {
public:
int romanToInt(string s) {
int ans=0;
for(int i=0;i<s.size();i++){
if(i==0){
if(s[i]=='I')
ans+=1;
else if(s[i]=='V')
ans+=5;
else if(s[i]=='X')
ans+=10;
else if(s[i]=='L')
ans+=50;
else if(s[i]=='C')
ans+=100;
else if(s[i]=='D')
ans+=500;
else if(s[i]=='M')
ans+=1000;
}
else{
if(s[i]=='I')
ans+=1;
else if(s[i]=='V' && s[i-1]!='I')
ans+=5;
else if(s[i]=='V' && s[i-1]=='I')
ans+=3;
else if(s[i]=='X' && s[i-1]!='I')
ans+=10;
else if(s[i]=='X' && s[i-1]=='I')
ans+=8;
else if(s[i]=='L' && s[i-1]!='X')
ans+=50;
else if(s[i]=='L' && s[i-1]=='X')
ans+=30;
else if(s[i]=='C' && s[i-1]!='X')
ans+=100;
else if(s[i]=='C' && s[i-1]=='X')
ans+=80;
else if(s[i]=='D' && s[i-1]!='C')
ans+=500;
else if(s[i]=='D' && s[i-1]=='C')
ans+=300;
else if(s[i]=='M' && s[i-1]!='C')
ans+=1000;
else if(s[i]=='M' && s[i-1]=='C')
ans+=800;
}
}
return ans;
}
};
int main()
{
	Solution d;
	string x;
	cout<<"Inter the Roman value"<<endl;
	cin>>x;
	d.romanToInt(x);
}