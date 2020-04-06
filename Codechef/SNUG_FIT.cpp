#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long 

int main() {
	// your code goes here
	
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector <ll> a(n);
	    vector <ll> b(n);
	    ll sum=0;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	        //cin>>b[i];
	        
	    }
	    for(ll i=0;i<n;i++)
	    {
	        //cin>>a[i];
	        cin>>b[i];
	        
	    }
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    
//	    for(ll i=0;i<n;i++)
//	    {
//	        cout<<a[i]<<" ";
//	    }
//	    cout<<endl;
//	    for(ll i=0;i<n;i++)
//	    {
//	        
//	        cout<<b[i]<<" ";
//	        
//	    }
//	    cout<<endl;
	    
	    for(ll i=0;i<n;i++)
	    {
	        
	        ll x=min(a[i],b[i]);
	        //cout<<x<<" ";
	        sum+=x;
	        
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
