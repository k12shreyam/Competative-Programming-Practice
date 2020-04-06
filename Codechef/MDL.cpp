#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ll t,n,a[100];
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    //vector <ll> a(n);
	    //vector <ll>::iterator it;
	    

	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    ll x=*min_element(a,a+n);
	    ll y=*max_element(a,a+n);
	    ll temp1=0,temp2=0;
	    for(ll i=0;i<n;i++)
	    {
	        if(a[i]==x)
	        {
	            temp1=i;
	        }
	    }
	    for(ll i=0;i<n;i++)
	    {
	        if(a[i]==y)
	        {
	            temp2=i;
	        }
	    }
	    if(temp1<temp2)
	    {
	        cout<<x<<" "<<y<<"\n";
	    }
	    else
	    cout<<y<<" "<<x<<"\n";
	    
	}
	return 0;
}
