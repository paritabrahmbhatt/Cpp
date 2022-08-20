
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t=1; //cin>>t;
    while(t--){
        int n,m,k, ans=INT32_MAX,min; cin>>n>>m;
        vector<int> v;
        for(int i=0; i<m;i++){
            int temp;cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        if(n==m) ans = v[n-1]-v[0];
        else{
            k = m-n;
            for(int i=0;i<=k;i++){
                min = v[i+n-1]-v[i];
                if(min<ans) ans = min; 
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
