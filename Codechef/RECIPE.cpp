#include <iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
 
int main() {
    int small,t,n,a[51],i,j;
cin>>t;
    while(t--)
 {
 cin>>n;
 small=0;
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 if(a[i]<a[small])
 small=i;
 }
 for(i=a[small];i>1;i--)
 {
     for(j=0;j<n;j++)
     {
         if(a[j]%i!=0)
         break;
     }
     if(j==n)
     {
         for(j=0;j<n;j++)
         a[j]/=i;
         i=a[small];
         
     }
 }
 for(i=0;i<n-1;i++)
 cout<<a[i]<<" ";
 cout<<a[i]<<endl;
}
	return 0;
}