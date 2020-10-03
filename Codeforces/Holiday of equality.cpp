#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int n,*x,max,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){cin>>a[i];}

	x=max_element(a,a+n);
	max=*x;
	
	for(int i=0;i<n;i++)
	{
	    sum+=max-a[i];
	}
	//cout<<x;
	cout<<sum;
	return 0;
}
