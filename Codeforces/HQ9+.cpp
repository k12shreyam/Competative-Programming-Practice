#include <iostream>

using namespace std;

int main() {
    string hq;
    cin>>hq;
    int x=0;
    x=hq.length();
    for(int i=0;i<x;i++)
    {
        if(hq[i]=='Q'||hq[i]=='H'||hq[i]=='9')
        {
            cout<<"YES";
            return 0;
        }
        
    }
    cout<<"NO";
    return 0;
}