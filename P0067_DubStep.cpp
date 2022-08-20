#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=1; //cin>>t;
    while(t--){
        string s; cin>>s;
        int count =0,i=0;
        while(i<s.length()){
            if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
                i += 3;
            }
            else{
                cout<<s[i];
                i++;
                if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') cout<<" ";
            }

        }
        //n=total numbers,i=index
        
    }
    return 0;
}