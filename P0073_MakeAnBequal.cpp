#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        if(a>b){
            int temp = a;
            a = b;
            b = temp;
        }
        if(a==b) cout<<"YES\n";
        else{  
            if((b/a)%2 ==0 && b%a==0){
                int d=b/a,flag=0;
                for(int i=0;i<(b/a)/2;i++){
                    d/=2;
                    if(d%2 != 0 && d != 1) break;
                    if(d==1){
                        flag = 1;
                        break;
                    }
                    //cout<<d<<" "<<flag<<endl;
                }
                if(flag==1) cout<<"YES\n";
                else cout<<"NO\n";
            }
            else cout<<"NO\n";
        }
    }
    return 0;
}