#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int xi,yi,xj,yj,r,n;
    float d;
    cin>>xi>>yi>>xj>>yj>>n>>r;
    d=sqrt(pow((xj-xi),2) + pow((yj-yi),2));
    if((d*n) <= r)
    {
        cout<<"yes";
    }
    else 
    cout<<"no";
    
    return 0;
}