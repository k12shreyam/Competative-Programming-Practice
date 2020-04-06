#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	long long int arr[200];
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
	    
	    
	    cin>>arr[i];
	    sum=sum+arr[i];
	    
	    
	}
	cout<<sum;
	
//	sum=accumulate(arr.begin(),arr.end(),sum);
	
	return 0;
}
