#include <iostream>

using namespace std;

int main() {
    
    int y,i,a,b,c,d,temp,z;
    cin>>y;
    temp=y;
    //a=temp%10;
    //temp=temp/10;
    //b=temp%10;
    //temp=temp/10;
    //c=temp%10;
    //temp=temp/10;
    
    while(1)
    {  
       temp+=1;
       
       a=temp/1000;
       b=(temp/100)%10;
       c=(temp/10)%10;
       d=temp%10; 
    
       if(a!=b && b!=c && c!=d && a!=d && b!=d && a!=c)
       {
           break;
       }
    }
    cout<<temp;
}
