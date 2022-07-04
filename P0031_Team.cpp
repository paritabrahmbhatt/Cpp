#include <bits/stdc++.h>

using namespace std;

int main(){   
    int t;cin>>t;
    int count = 0;
    while(t--){
        int ans=0;
        for(int i =0;i<3;i++){
            int t; cin>>t;
            if(t==1) ans++;
        }
        if(ans>1) count++;
    } 
    cout<<count<<endl;
    return 0;
}