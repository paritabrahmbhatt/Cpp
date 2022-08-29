#include <bits/stdc++.h>

using namespace std;
int main() {
    // Write C code here
    string s; cin>>s;
    int x=0;
    while(x<s.length()){
        if(s[x]=='.') cout<<0;
        else{
            x++;
            if(s[x]=='-') cout<<2;
            else cout<<1;
        }
        x++;
    }
    
    return 0;
}
