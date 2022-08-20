#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int n,count=0; cin>>n;
        int arr[n];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            int temp = arr[i];
            if(mp[temp]==1){
                for(int j=count;j<i;j++){
                    count++;
                    int t = arr[j];
                    mp[t]=0;
                    if(t ==temp) break;
                }
            }
            mp[temp]=1;
        }
        cout<<count<<"\n";
    }
    return 0;
}