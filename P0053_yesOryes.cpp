#include <bits/stdc++.h>
//#include<map>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        string s,ans="YES";cin>>s;
        if(s[0]!='Y'&& s[0]!='y') ans="NO";
        if(s[1]!='E'&& s[1]!='e') ans="NO";
        if(s[2]!='S'&& s[2]!='s') ans="NO";
        //1cout<<s[0]<<" "<<endl;
        cout<<ans<<"\n";
    }
    return 0;
}