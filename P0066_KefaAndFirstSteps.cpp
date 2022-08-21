#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=1; //cin>>t;
    while(t--){
        int n; cin>>n;
        int t2,t1=0,ans=INT16_MIN, count =0;
        while(n--){
            cin>>t2;
            if(t2>= t1) count++;
            
            else {
                if(ans<count) ans = count;
                count = 1;
            }
            t1 = t2;
        }
        if(ans<=count) ans = count; 
        //n=total numbers,i=index
        cout<<ans<<"\n";
    }
    return 0;
}
