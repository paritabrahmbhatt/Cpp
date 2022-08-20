#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        long long n, ans; cin>>n;
        //n=total numbers,i=index
        if(n%3==0) ans = n/3;
        else if(n%3==1){ 
            ans = n/3 +1;
            if(n==1 || n==4) {
                ans = 2;
            }
        }
        else ans = (n/3) +1;
        
        cout<<ans<<endl;
    }
    return 0;
}