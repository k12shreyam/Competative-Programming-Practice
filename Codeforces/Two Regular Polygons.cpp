#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n%m==0)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}