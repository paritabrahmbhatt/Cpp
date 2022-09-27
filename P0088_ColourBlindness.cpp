#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int n,flag = 0; cin>>n;
        string s1,s2; cin>>s1>>s2;
        char c1,c2;
        for(int i=0; i<n;i++){
            c1 = s1[i];
            c2 = s2[i];
            if(c1!=c2){
                if((c1 == 'G' && c2 == 'B')||(c1=='B' && c2 == 'G')) continue;
                else{
                    flag = 1;
                    break;
                }
            }
        }
        //n=total numbers,i=index
        if(flag == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}