#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin>>s;
    s[0]=toupper(s[0]);
    //putchar(s);
    cout<<s;
    return 0;
}