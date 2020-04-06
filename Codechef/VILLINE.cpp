#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,x,y,p,m,c,h;
	cin>>n;
	cin>>m>>c;
	int count1=0,count2=0;
	for(int i=0;i<n;i++)
	{
	   
	    cin>>x>>y>>p;
	    int h=y-(m*x)-c;
	    if(h<0)
	    {
	        count1+=p;
	    }
	    else
	    count2+=p;
	    
	}
    cout<<max(count1,count2);
	
	return 0;
}
