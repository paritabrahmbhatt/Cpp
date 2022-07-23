#include <bits/stdc++.h>
//#include<map>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n,m,count=0; cin>>n>>m;
        map<int,int> mp;
        while(m--){
            int temp;cin>>temp;
            mp[temp]++;
        }
        for(int i=1;i<=n;i++){
            //count = mp[i];
            //cout<<mp[i]<<endl;
            if(mp[i]>count) count = mp[i]-count;
        }
        cout<<count<<endl;
    }
    return 0;
}