#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	string ss;
	getline(cin,ss);
	//cout<<ss;
	set<char> s;
	for(int i=0;i<ss.size();i++)
	{
	    if(ss[i]>='a' && ss[i]<='z'){
	    //cin>>q;
	    s.insert(ss[i]);}
	}
	cout<<s.size();
	return 0;
}
