#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=1; //cin>>t;
    while(t--){
        int n; cin>>n;
        //n=total numbers,i=index
        map<int,int> mp;
        while(n--){
            int temp; cin>>temp;
            mp[temp]++;
        }
        for(auto i:mp){
            for(int k=0;k<i.second;k++) cout<< i.first<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}