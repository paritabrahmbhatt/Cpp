#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=1;// cin>>t;
    while(t--){
        int n,count=0,j=0; cin>>n;
        string s; cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]==s[i-1]){
                count++;
                //j++;
            }
            
        }
        cout<<count<<"\n";
        //n=total numbers,i=index
        
    }
    return 0;
}