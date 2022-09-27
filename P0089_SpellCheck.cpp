#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int flag = 0;
        map<char,int> mp;
        if(n!=5){
            flag = 1;
        }
        else{
            for(int i=0; i<5;i++){
                char c=s[i];
                mp[c]++;
            }
            if(mp['T']==1 && mp['i']==1 && mp['m']==1 && mp['u']==1 && mp['r']==1) flag =0;
            else flag = 1;
        }

        if(flag ==1) cout<<"NO\n";
        else cout<<"YES\n";
        //n=total numbers,i=index
        
    }
    return 0;
}