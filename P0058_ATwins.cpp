#include <bits/stdc++.h>
//#include<map>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> v;

    int sum=0,sum2=0,count=0;
    while(n--){
        int temp; cin>>temp;
        sum += temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    
    //int t=v.size()/2;
    
    for(int i=v.size()-1;i>=0;i--){
        sum2+=v[i];
        sum -= v[i];
        count++;
        if(sum<sum2) break;
    }
    cout<<count<<endl;
    return 0;
}