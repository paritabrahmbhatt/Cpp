#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int avail = 0;
    int ans = 0;
    int t;
    while(n>0){
        cin>>t;
        if(t==(-1) && avail>0){
            avail--;
        }
        else if(t==(-1) && avail==0){
            ans++;
        }
        else if(t!=(-1)){
            avail += t;
        }
        n--;
    }
    cout<<ans;
    return 0;
}
