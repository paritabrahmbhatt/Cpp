#include <iostream>
#include<map>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int,int> mp;
        for(int i=0; i<n;i++){
            int temp; cin>>temp;
            mp[temp]++;
        }
        int ans=-1;
        for(auto it:mp){
            if(it.second >= 3){
                ans = it.first;
                break;
            }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}
