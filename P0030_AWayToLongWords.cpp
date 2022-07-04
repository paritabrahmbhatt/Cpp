#include <bits/stdc++.h>

using namespace std;

int main(){   
    int t;cin>>t;
    while(t--){
        string s; cin>>s;
        int length = s.size() - 2;
        if(s.size()<= 10){
            cout<<s<<endl;
        }
        else cout<<s[0]<<length<<s[length+1]<<endl;
    } 

    return 0;
}