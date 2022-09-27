#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=1; //cin>>t;
    while(t--){
        long long n, temp; cin>>n;
        int flag =0;
        //n=total numbers,i=index
        while(n>0){
            temp = n%10;
            n /= 10;
            if(temp != 4 && temp != 7){
                flag = 1; 
                break;
            }
        }
        if(flag==1) cout<<"NO";
        else cout<<"YES";
    }
    return 0;
}