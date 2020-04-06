#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b>>c;
	    vector<int> arr={a,b,c};
	    sort(arr.begin(),arr.end());
	    cout<<arr[1]<<endl;
	    
	}
	return 0;
}
