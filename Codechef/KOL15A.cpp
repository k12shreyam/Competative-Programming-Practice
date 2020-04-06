#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    int sum=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(isdigit(s[i]))
	        {
	            sum=sum+s[i]-'0';
	        }
	        
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
