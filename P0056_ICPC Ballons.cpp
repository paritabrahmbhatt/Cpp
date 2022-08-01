#include <bits/stdc++.h>
//#include<map>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        vector<int> v; 
        int n; cin>>n;
        int s=n-1,i=0,flag=0,count=0;
        while(n--){
            int temp; cin>>temp;
            v.push_back(temp);
        }
        vector<int> temp;
        temp = v;
        v.clear();
        while(i<temp.size()){
            cout<<temp[i]<<endl;
            i++;
        }
    }
    return 0;
}