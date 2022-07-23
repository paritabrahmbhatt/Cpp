#include <bits/stdc++.h>
//#include<map>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n,z,max = INT32_MIN; cin>>n>>z;
        //int arr[n];
        for(int i=0; i<n;i++){
            int a;cin>>a;
            int temp = z;
            z &= a;
            a |= temp;
            if(a>max) max = a;
        }
        cout<<max<<endl;
    }
    return 0;
}