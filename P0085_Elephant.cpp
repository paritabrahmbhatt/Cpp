#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=1;// cin>>t;
    while(t--){
        int n; cin>>n;
        if(n<=4) cout<<1<<"\n";
        else{
            int ans = n/5;
            if(n%5 != 0) ans++;
            cout<<ans<<"\n";
        }
        //n=total numbers,i=index
        
    }
    return 0;
}