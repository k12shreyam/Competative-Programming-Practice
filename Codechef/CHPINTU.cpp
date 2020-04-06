#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[m][2];
        for(int i=0 ; i<m ; i++){
            arr[i][0]=0;
            arr[i][1]=0;
        }
        int F[n], P[n], index;
        for(int i=0 ; i<n ; i++){
            cin>>F[i];
            index = F[i]-1;
            arr[index][1] = 1;
        }
        for(int i=0 ; i<n ; i++){
            cin>>P[i];
            index = F[i]-1;
            arr[index][0]+=P[i];
        }
        int res=10000;
        for(int i=0 ; i<m ; i++){
            if(arr[i][1]==1 && arr[i][0]<res){
                res = arr[i][0];
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}