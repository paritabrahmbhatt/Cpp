#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=1; //cin>>t;
    while(t--){
        char n; cin>>n;
        string s; cin>>s;
        string k="qwertyuiopasdfghjkl;zxcvbnm,./";

        if(n=='R'){
            for(int i=0;i<s.length();i++){
                for(int j=0;j<k.length();j++){
                    if(s[i]==k[j]){
                        cout<<k[j-1];
                        continue;
                    }
                }
            }
        }
        else{
            for(int i=0;i<s.length();i++){
                for(int j=0;j<k.length();j++){
                    if(s[i]==k[j]){
                        cout<<k[j+1];
                        continue;
                    }
                }
            }            
        }    
    }
    return 0;
}