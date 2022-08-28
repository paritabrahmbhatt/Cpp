#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int,int> mp;
        //n=total numbers,i=index
        while(n--){
            int temp; cin>>temp;
            mp[temp]++;
        }
        for(auto it:mp){
            if(it.second %2 !=0){
                cout<<it.first<<"\n";
                break;
            }
        }
    }
    return 0;
}