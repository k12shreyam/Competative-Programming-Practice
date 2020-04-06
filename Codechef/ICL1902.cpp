#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int count=0;
	    cin>>n;
	    while(n>0)
	    {
	    int x=sqrt(n);
	    n=n-pow(x,2);
	    count++;
	    }
	    if(n==0)
	    {
	        cout<<count<<endl;
	    }
	}
	return 0;
}
