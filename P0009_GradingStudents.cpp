#include<bits/stdc++.h>
#include<iostream>

using namespace std;

vector<int> gradingStudent(vector<int> arr){
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<38){
            ans.push_back(arr[i]);
        }
        else{
            int a1 = arr[i]+1;
            int a2 = arr[i]+2;
            if(a1%5 == 0){
                ans.push_back(a1);
            }
            else if(a2%5 == 0){
                ans.push_back(a2);
            }
            else{
                ans.push_back(arr[i]);
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr{73,67,38,33};
    vector<int> a = gradingStudent(arr);
    for(int i = 0;i<arr.size();i++){
        cout << a[i]<<" ";
    }
}