#include <iostream>
#include <set>
using namespace std;
#define ll long long 

int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        ll q;
        cin>>n;
        set <ll> s;
        for(ll i=0;i<n;i++)
        {
            cin>>q;
            s.insert(q);
        }
        cout<<s.size()<<endl;
    }
    
}