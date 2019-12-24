#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	string x;
	for(int i=0;i<t;i++)
	{
	    cin>>x;
	    if(x=="B" || x=="b")
	    {
	        cout<<"BattleShip"<<endl;
	    }
	    else
	    if(x=="C" || x=="c")
	    {
	        cout<<"Cruiser"<<endl;
	    }
	    else
	    if(x=="D" || x=="d")
	    {
	        cout<<"Destroyer"<<endl;
	    }
	    else
	    cout<<"Frigate"<<endl;
	}
	
	return 0;
}
