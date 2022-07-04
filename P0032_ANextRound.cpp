#include <bits/stdc++.h>

using namespace std;

int main(){   
    //int t;cin>>t;

    //while(t--){
        int n,k,count=0,j;
        cin>>n>>k;
        map<int,int> mp;
        for(int i=0; i<n;i++){
            int temp;cin>>temp;
            
            if(i<k && temp>0) {
                //cout<<i<<" "<<temp<<endl;
                mp[temp]++;
                if(i==(k-1)) j = temp;
            }
            else if(i>=k && temp == j){
                //cout<<i<<" "<<temp<<endl;
                mp[temp]++;
            }
        }
        for(auto it:mp){
            count+= it.second;
        }
        cout<<count<<endl;
    //} 
    return 0;
}