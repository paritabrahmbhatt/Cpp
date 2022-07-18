#include <iostream>
#include<map>
using namespace std;
int main() {
    // Write C++ code here
    //int t; cin>>t;
    
    //while(t--){
        string a; cin>>a;
        if(int(a[0])>=97 &&int(a[0])<=122){
            int temp = a[0] - 32;
            a[0] = char(temp);
        }
        cout<<a<<endl;
    //}
 
    return 0;
}
