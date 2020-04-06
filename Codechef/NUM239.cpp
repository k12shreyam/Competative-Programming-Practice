#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,l,r;
	cin>>t;
	while(t--)
	{
	    cin>>l>>r;
	    int count =0;
	    for(int i=l;i<=r;i++)
	    {
	        int x=i;
	        if(x==2 || x==3 || x==9)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
