//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t; cin>>n>>t;
    int arr[n];
    for(int i = 0; i< n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n, greater<int>());
    //int q; cin>>
    while(t--){
        int a, b, sum=0; cin>>a>>b;
        for(int i=0; i<a;i++){
            if(i >= a-b) sum += arr[i];
        }
        cout<<sum<<endl;
    }

}