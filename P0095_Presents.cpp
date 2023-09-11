#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    map<int, int> map;
    int n,temp;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>temp;
        map[temp] = i;
    }
    for (auto i : map){
        cout<<i.second<<" ";
    }
    return 0;
}
