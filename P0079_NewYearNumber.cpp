#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n<2020) cout<<"NO\n";
        else{
            if(n%2021==0||n%2020==0) cout<<"YES\n";
            else if(n%2020!=0) {
                int k = n / 2020;
                if(n%2020 < k) cout<<"YES\n";
                else cout<<"NO\n";
            }
            else cout<<"NO\n";
        //n=total numbers,i=index
        }
    }
    return 0;
}