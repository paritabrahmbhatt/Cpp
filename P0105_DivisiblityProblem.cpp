#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int a,b;
    while(n>0){
        cin>>a>>b;
        if(a%b==0){
            ans = 0;
            cout<<ans<<endl;
        }
        else if(a>b && a%b!=0){
            ans = b - (a%b);
            cout<<ans<<endl;
        }
        else if(a<b){
            ans = b - a;
            cout<<ans<<endl;
        }
        n--;
    }
    return 0;
}
