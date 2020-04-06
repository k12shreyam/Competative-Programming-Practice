#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,digit,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int sum=0;
	    cin>>n;
	    while(n>0)
	    {
	        digit=n;
	        n/=10;
	        sum+=digit;
	    }
	     cout<<sum<<endl; 
	}
	return 0;
}
