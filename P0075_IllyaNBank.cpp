#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=1; //cin>>t;
    while(t--){
        int n; cin>>n;

        if(n>=0) cout<<n<<"\n";
        else{
            int l,sl;
            l = n/10;
            sl = (n%10) + (n/100)*10;
            if(sl>l) cout<<sl<<"\n";
            else cout<<l<<"\n";
        }
        
    }
    return 0;
}