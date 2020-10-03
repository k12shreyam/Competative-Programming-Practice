#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ll n,m;
	cin>>n>>m;
	vector<ll> a(m);
	for(ll i=0;i<m;i++){cin>>a[i];}
	ll x=abs(a[0]-1);
	for(ll i=0;i<m-1;i++)
	{
	    if(a[i]>a[i+1])
	    {
	        x+=abs(a[i]-n)+abs(a[i+1]);
	    }
	    if(a[i]<a[i+1])
	    {
	        x+=abs(a[i]-a[i+1]);
	    }
	    if(a[i]==a[i+1])
	    //else
	    {
	        x=x;
	    }
	}
	cout<<x;
	return 0;
}
