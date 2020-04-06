#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(void){
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 
 ll x,a=-1,b=-1;
 cin>>x;
 for(ll i=1;i<=x;i++)
 {
     for(ll j=1;j<=x;j++)
     {
         if(i%j==0 && (i*j)>x && (i/j)<x)
         {
             a=i;
             b=j;
         }
     }
 }
 if(a==-1 && b==-1)
 {
     cout<<-1;
 }
 else
 cout<<a<<" "<<b;
 
 return 0;
}