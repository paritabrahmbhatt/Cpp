#include<map>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int i=0,count=3,days=0;
        map<char,int> mp;
        char temp = s[0];
        while(i<s.length()){
            if(mp[temp]==0){
                count--;
            }
            mp[temp]++;
            i++;
            temp = s[i];
            if(count == 0 && mp[temp]==0){
                count = 3;
                mp.clear();
                days++;
            }
        }
        if(count!=0 && count !=3) days++;
        cout<<days<<endl;
    }

    return 0;
}
