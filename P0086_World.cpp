#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=1; //cin>>t;
    while(t--){
        //int n; cin>>n;
        //n=total numbers,i=index
        string s; cin>>s;
        int uc=0,lc=0;
        for(int i=0;i<s.length();i++){
            int m = int(s[i]);
            if(m>= 65 && m<=90) uc++;
            else lc++;
        }
        if(lc>=uc){
            for(int i=0;i<s.length();i++){
                int m = int(s[i]);
                if(m>= 65 && m<=90) cout<<char(m+32);
                else cout<<s[i];
            }
        }
        else{
                for(int i=0;i<s.length();i++){
                    int m = int(s[i]);
                    if(m>= 97 && m<=122) cout<<char(m-32);
                    else cout<<s[i];
            }
        }
    }
    return 0;
}