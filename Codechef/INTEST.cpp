#include <iostream>

using namespace std;

int main() {
    long long int n,k,t;
    int c=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t%k==0)
        {
        c++;
        }
    }
    cout<<c;
}