#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string o = "I hate ";
    string e = "I love ";
    string end1 = "that ";
    string end2 = "it";
    string ans;
    for(int i=1;i<=n;i++){
        ans = (i%2 !=0) ? ans+o : ans+e;
        ans = (i<n) ? ans+end1 : ans+end2;
    }
    cout<<ans;
    return 0;
}
