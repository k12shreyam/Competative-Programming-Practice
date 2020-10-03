#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int count=0,x=0;
	for(int i=1;i<=n;i++)
	{
	    
	    x+=5*i;
	    if(x <= (240-k))
	    {
	        count++;
	    }
	    else break;
	}
	cout<<count;
	return 0;
}
