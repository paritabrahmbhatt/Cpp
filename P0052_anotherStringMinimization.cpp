#include <bits/stdc++.h>
//#include<map>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n,i; cin>>n>>i;
        vector<string> v(i,"B");
        //vector<int> a;
        while(n--){
            int temp;cin>>temp;
            if(temp<=(i-temp+1) && v[temp-1]=="B") v[temp-1]="A";
            else if(temp>=(i-temp+1) && v[i-temp]=="B") v[i-temp]="A";
            else if(temp<=(i-temp+1) && v[temp-1]=="A") v[i-temp]="A";
            else if(temp>=(i-temp+1) && v[i-temp]=="A") v[temp-1]="A";
        }
        for(int j=0;j<i;j++)cout<<v[j];
        cout<<"\n";
    }
    return 0;
}