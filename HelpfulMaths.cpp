#include <iostream>
#include<map>
using namespace std;
int main() {
    // Write C++ code here
    //int t; cin>>t;
    
    //while(t--){
        string a; cin>>a;
        map<char,int> mp;
        int i =0,count=0;
        for(int i=0; i<a.length();i+=2){
            //int t1= a[i]-48
            char temp = a[i];
            mp[temp]++;
        }
        for(auto it:mp){
            for(int i=0;i<it.second;i++){
                cout<<it.first;
                if(count<a.length()/2){
                    cout<<"+";
                    count++;
                }
            }
        }
    //}
 
    return 0;
}
