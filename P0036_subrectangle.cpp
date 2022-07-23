#include <bits/stdc++.h>
//#include<map>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        long long sum;
        int o,e,flag;
        int n;cin>>n;
        while(n--){
            int temp; cin>>temp;
            //if(temp%2 == 0) e++;
            //else o++;
            if(temp==1){
                flag = 1;
            }
            sum += temp;
        }
        if(flag==1) {
            cout<<"Chef"<<endl;
            continue;
        }
        if(n==1){
            if(sum%2==0) cout<<"Chefina"<<endl;
            else cout<<"Chef"<<endl;
        }
        else{
            if(sum%2 != 0) cout<<"Chef"<<endl;
            else cout<<"Chefina"<<endl;
        }
    }
    return 0;
}