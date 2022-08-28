#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;cin>>a>>b;
    int count =0;
    if(a==b) count = a;
    else{
        int mi= min(a,b), ma=max(a,b);
        count += mi;
        cout<<count<<" ";
        ma -= mi;
        count = ma/2;
    }
    
    cout<<count<<"\n";
    return 0;
}