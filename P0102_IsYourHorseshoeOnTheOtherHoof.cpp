#include<bits/stdc++.h>
using namespace std;

int main(){
    long s1;
    int ans=0;
    map<long,int> mp;
    int n = 4;
    while(n>0){
        cin>>s1;
        mp[s1]++;
        ans= (mp[s1]>1) ? ans+1 : ans;
        n--;
    }
    cout<<ans;
    return 0;
}
