#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int x,flag=0; cin>>x;
        int arr[3];
        for(int i=0;i<3;i++){
            int temp; cin>>arr[i];
        }
        for(int i=0;i<3;i++){
            if((arr[x-1]!=0 && i<2)||(i==2 && arr[x-1]==0)) x=arr[x-1];
            else{
                flag=1; 
                break;
            } 
        }
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}