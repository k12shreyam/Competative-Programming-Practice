#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a=n%10;
        int b=floor(log10(n)+1);
        int c=n/(pow(10,(b-1)));
        cout<<a+c<<endl;
    }
    
}