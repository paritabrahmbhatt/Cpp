#include <bits/stdc++.h>
//#include<map>
using namespace std;

int main() {
    string s; cin>>s;
    int flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='Q'||s[i]=='H'||s[i]=='9'){
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"YES"<<"\n";
    else cout<<"NO";
    return 0;
}