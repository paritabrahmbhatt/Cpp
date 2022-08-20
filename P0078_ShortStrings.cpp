#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        //n=total numbers,i=index
        if(s.length()==2) cout<<s;
        else{
            for(int i=0;i<s.length();i++){
                if(i%2==0 && i!= s.length()-1) cout<<s[i];
                else if(i==s.length()-1) cout<<s[i];
            }
        
        }
        cout<<"\n";
    }
    return 0;
}