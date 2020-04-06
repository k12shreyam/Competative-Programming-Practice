#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,r;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int rev=0;
	    cin>>n;
	    int m=n;
	    while(n>0)
	    {
	    r=n;
	    n=n/10;
	    rev=rev*10+r;
	    
	    }
	    if(m==rev)
	    {
	        cout<<"wins"<<endl;
	        
	    }
	    else
	    cout<<"losses"<<endl;
	    
	}
	
	return 0;
}
