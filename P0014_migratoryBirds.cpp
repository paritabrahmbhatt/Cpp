#include<bits/stdc++.h>
using namespace std;

int migratorybirds(vector<int> arr){
    vector<int> ans;
    for(int i=0;i<arr.size()-1;i++){
        int count=0;
        for(int j = i+1;j<arr.size();j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        ans.push_back(count);
    }
}