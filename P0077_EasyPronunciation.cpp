#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int n,count =0,flag=0; cin>>n;
        while(n--){
            char c; cin>>c;
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                count =0;
            }
            else count++;
            //cout<<count<<" "<<c<<endl;
            if(count>=4){
                flag=1;
            }
        }
        if(flag==1) cout<<"NO\n";
        else cout<<"YES\n";
        
    }
    return 0;
}