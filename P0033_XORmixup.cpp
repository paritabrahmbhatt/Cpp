#include <bits/stdc++.h>
//#include<map>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n,e,total=0; cin>>n>>e;
        for(int i = 0; i<n;i++){
            int temp;cin>>temp;
            total += temp;
        } 
        if(total >= e) cout<<total-e<<endl;
        else cout<<0<<endl;
    }
    return 0;
}