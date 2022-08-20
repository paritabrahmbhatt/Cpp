#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=1; //cin>>t;
    while(t--){
        int n,m,ans=0; cin>>n>>m;
        vector<int> arr;
        while(n--){
            int temp; cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<m;i++){
            if(arr[i]<0) ans += arr[i];
        }
        cout<<abs(ans)<<"\n";
    }
    return 0;
}