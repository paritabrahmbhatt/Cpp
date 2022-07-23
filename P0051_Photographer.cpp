#include <bits/stdc++.h>
//#include<map>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n,d,flag=0; cin>>n>>d;
        int n2 = n*2;
        vector<int> a;
        while(n2--){
            int temp; cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        for(int i=0; i<n;i++){
            if(a[i+n]-a[i]< d){
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        //cout<<ans<<endl;
    }
    return 0;
}