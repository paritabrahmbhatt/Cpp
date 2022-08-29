#include <bits/stdc++.h>

using namespace std;
int main() {
    // Write C code here
    string s; cin>>s;
    map<int,char> mp;
    int count =0;
    for(int i=0; i<s.length();i++){
        char k = s[i];
        if(mp[k]==0) count++;
        mp[k]++;
    }
    if(count%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    return 0;
}
