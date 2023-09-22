#include<bits/stdc++.h>
using namespace std;

int main(){
    char a;
    map<char,int> mp;
    while(true){
        cin>>a;
        if(a=='}'){
            break;
        }
        if(a!=',' && a!=' ' && a!='{'){
            char t = char(int(tolower(a)));
            mp[t]++;
        }
    }
    cout<<mp.size();
    return 0;
}
