#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int t,BS;
	float GS;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>BS;
	    if(BS<1500)
	    {
	        GS=BS+(0.1*BS)+(0.9*BS);
	        cout<<fixed<<setprecision(2)<<GS<<endl;
	    }
	    else
	    {
	    GS=BS+500+(0.98*BS);
	    cout<<fixed<<setprecision(2)<<GS<<endl;
	    }
	}
	return 0;
}
