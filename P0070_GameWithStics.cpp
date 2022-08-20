#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=1; //cin>>t;
    while(t--){
        int r,c; cin>>r>>c;
        //n=total numbers,i=index
        if(r<c){
            if(r%2==0) cout<<"Malvika\n";
            else cout<<"Akshat\n";
        }
        else if(r==c){
            if(r%2==0) cout<<"Malvika\n";
            else cout<<"Akshat\n";
        }
        else{
            if(c%2==0) cout<<"Malvika\n";
            else cout<<"Akshat\n";
        }
    }
    return 0;
}