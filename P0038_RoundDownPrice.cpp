#include <bits/stdc++.h>
//#include<map>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        long long i; cin>>i;
            //long long i = im;
        int count=0;
        long long ans=0;
        while(i!=0){
            long long temp = i % 10;
            if(i>0 && i<=9) temp--;
            i /= 10;
            ans += temp*pow(10,count);
            count++;
        }
        cout<<ans<<endl;
    }
    return 0;
}