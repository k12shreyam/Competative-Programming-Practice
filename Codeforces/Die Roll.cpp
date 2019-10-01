#include <iostream>

using namespace std;

int main() {
    int w,y,x;
    cin>>y>>w;
    const char* prob[]={"","1/1","5/6","2/3","1/2","1/3","1/6","0/6"};
    x=std::max(w,y);
    cout<<prob[x];
    
    return 0;
}