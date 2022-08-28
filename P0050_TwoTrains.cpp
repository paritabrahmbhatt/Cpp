#include<bits/stdc++.h>
using namespace std;
int main() {
    int test; cin>>test;
    while(test--){
        int n; cin>>n;
        int a=1,b=1,t=0;
        vector<int> v;
        for(int i=0;i<n-1;i++){
            int temp; cin>>temp;
            v.push_back(temp);
        }
        for(int i=0;i<v.size();i++){
            t += v[i];
            a++;
            if(a>b+2){
                b++;
            }
            if(a==n){
                
            }
        }
    }
    return 0;
}