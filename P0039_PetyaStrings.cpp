#include <bits/stdc++.h>
//#include<map>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        string a,b; cin>>a>>b;
        int ans=0;
        for(int i=0;i<a.length();i++){
            int t1=int(a[i]);
            int t2=int(b[i]);
            if(t1>t2 || t1-32>t2||t1+32>t2){
                ans = 1;
                break;
            }
            else if(t1<t2 || t1-32<t2||t1+32<t2){
                ans = -1;
                break;
            } 
        }
        cout<<ans<<endl;
    }
    return 0;
}