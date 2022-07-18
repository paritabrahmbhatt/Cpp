// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    //int t; cin>>t;
    
    //while(t--){
        string a,b; cin>>a>>b;
        int ans=0;
        for(int i=0; i<a.length(); i++){
            int t1= int(a[i]);
            int t2= int(b[i]);
            if(t1>=65 && t1<=90) t1 += 32;
            if(t2>=65 && t2<=90) t2 += 32;
            //Case1
            if(t1 > t2){
                ans = 1;
                break;
            }
            //Case 2
            else if(t1 <t2){
                ans = -1;
                break;
            }

            //Case 3
        }
        cout<<ans<<endl;
    //}

    return 0;
}
