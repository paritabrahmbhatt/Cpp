
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    int t; cin>>t;
    while(t--){
        vector<int> v; 
        int n; cin>>n;
        int i=n-1,count=0;
        while(n--){
            int temp; cin>>temp;
            v.push_back(temp);
        }
        int j=v[i];
        i--;
        while(i>=0){
            if(v[i]>j){
                count++;
                j=v[i];
            }
            i--;
        }
        cout<<count<<"\n";
    }
    return 0;
}