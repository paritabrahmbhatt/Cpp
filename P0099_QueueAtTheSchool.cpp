#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    string q,ans;
    cin>>q;
    for(int i = 0; i<s;i++){
        for(int j=0;j<n;j++){
            if(q[j]=='B' && q[j+1]=='G'){
                ans += q[j+1];
                ans += q[j];
                j++;
            }
            else{
                ans += q[j];
            }
        }
        q = ans;
        ans = "";
    }
    cout<<q;
    return 0;
}
