#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    long long int n,count=0;
	    cin>>n;
	    while(n>0)
	    {
	        long long int r;
	        r=n;
	        n=n/10;
	        if(r==4)
	        {
	            count++;
	        }
	    }
	cout<<count<<endl;
	}
	return 0;
}
