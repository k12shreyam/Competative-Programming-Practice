#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,count1=0,count2=0,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    if(a[i]%2==0)
	    {
	        count1++;
	    }
	    else 
	    count2++;
	}
	if(count2>count1)
	{
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]%2==0)
	        {
	            cout<<i+1;
	            break;
	        }
	    }
	}
	else{
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]%2!=0)
	        {
	            cout<<i+1;
	            break;
	        }
	    }
	}
	return 0;
}
