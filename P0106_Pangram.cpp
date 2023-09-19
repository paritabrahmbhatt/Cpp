#include<bits/stdc++.h>
using namespace std;

void solution(int n, string s){
    map<char, int> mp;
    if(n<26){
        cout<<"NO";
    }
    else{
        char t;
        for(auto x:s){
            t = char(tolower(x));
            mp[t]++;
        }
        if(mp.size()==26){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    solution(n,s);
    return 0;
}
