#include <iostream>

using namespace std;

int main() {
    int n,p,q,count=0;
    cin>>n;
    //while(n--)
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        if(q-p>=2)
        {
            count++;
            
        }
    }
    //int count=0;
    //for(int i=0;i<n;i++)
    //{
        
    //}
    
    cout<<count;
    return 0;
}