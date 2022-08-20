#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int n,c=0,count=0; cin>>n;
        int ans=0,r=n%10;
        //n=total numbers,i=index
        while(n>0){
            n /= 10;
            c++;
        }
        for(int i=1;i<=c;i++) count +=i;
        ans = count + ((r-1)*10);
        cout<<ans<<"\n";
    }
    return 0;
}