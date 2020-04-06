#include <iostream>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    //ll count=0;
	    //ll y=a%b;
	    //for(int x = y;y !=0;y++)
	    //for(int i=0;i<1000;i++){
	    if(a%b==0){
	        //return 0;
	        cout<<0<<"\n";
	        
	    }
	    
	    else
	    {
	        //a++;
	        //count++;
	        cout<<b-(a%b)<<"\n";
	    }
	    //while(a%b !=0){
	        //a++;
	        //count++;
	    //}
	    //cout<<count<<"\n";
	}
	return 0;
}
