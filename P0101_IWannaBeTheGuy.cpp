#include <bits/stdc++.h>
using namespace std;

int main(){
    string a = "I become the guy.";
    string b = "Oh, my keyboard!";
    int n; cin>>n;
    int x; cin>>x;
    map<int,int> mp;
    for(int i=0;i<x;i++){
        int t; cin>>t;
        mp.insert({t,t});
    }
    int y; cin>>y;
    for(int i=0;i<y;i++){
        int t; cin>>t;
        mp.insert({t,t});
    }
    if(mp.size()==n){
        cout<<a;
    }
    else{
        cout<<b;
    }
    return 0;
}
