#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int count=0;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        if(n%i==0)
	        {
	            count++;
	        }
	    }
	    if(count==2)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    cout<<"no"<<endl;
	    
	}
	return 0;
}
