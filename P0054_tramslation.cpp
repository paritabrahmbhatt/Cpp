#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=1; //cin>>t;
    while(t--){
        //int n; cin>>n;
        //n=total numbers,i=index
        string s,t;cin>>s>>t;
        int n = s.length()-1,flag=0;
        for(int i=0;i<s.length();i++){
            if(t[i]!= s[n]){
                flag=1;
                break;
            }
            n--;
        }
        if(flag==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}