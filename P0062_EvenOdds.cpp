#include<bits/stdc++.h>
using namespace std;
int main() {
    //int t=1; //cin>>t;
    //while(t--){
        long long n,i,t; cin>>n>>i;
        //n=total numbers,i=index
        if(n%2==0) t = n/2;
        else t = (n/2)+1;

        if(i<=t) cout<<(i*2)-1<<"\n";
        else cout<<(i-t)*2<<"\n";
    //}
    return 0;
}