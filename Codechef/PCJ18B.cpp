#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    int sum=0;
	    for(int j=1;j<=n;j+=2)
	    {
	        sum=sum+pow(((n-j)+1),2);
	        //sum=sum+j*j;
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
