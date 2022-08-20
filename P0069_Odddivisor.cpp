#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        int flag=0;
        //n=total numbers,i=index
        for(long long i=3;i<=sqrt(n);i+=2){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(n==5||n==7||n==3) flag=1;
        if(flag==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}