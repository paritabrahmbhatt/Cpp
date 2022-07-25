// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        
        for(int i=0;i<n;i++){
            int j;cin>>j;
            string s; cin>>s;
            for(int k=0;k<j;k++){
                if(s[k]=='D'){
                    a[i]++;
                    if(a[i]>9)a[i]=0;
                }
                else if(s[k]=='U'){
                    a[i]--;
                    if(a[i]<0) a[i]=9;
                }
            }
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}
