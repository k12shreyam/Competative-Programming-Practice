#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x;
    float y;
    cin>>x>>y;
    if(x%5==0)
    {
        if(x<y-0.50)
        {
            cout<<fixed<<setprecision (2)<<(y-x-0.50);
        }
        else
        cout<<fixed<<setprecision (2)<<y;
    }
    else
    cout<<fixed<<setprecision (2)<<y;
    
}