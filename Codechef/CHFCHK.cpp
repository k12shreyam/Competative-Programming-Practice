#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,n,q;
	
	cin>>t;
	//int arr[100];
	for(int i=0;i<t;i++)
	{
	    vector<long long int> arr;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>q;
	        arr.push_back(q);
	        
	    }
	    sort(arr.begin(),arr.end());
	    
	    cout<<arr[0]<<endl;
	}
	return 0;
}
