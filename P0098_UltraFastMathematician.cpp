#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string a,b,ans;
    cin>>a>>b;
    for(int i=0; i<a.length();i++){
        ans += (a[i]==b[i]) ? "0" : "1";
    }
    cout<<ans;
}
