#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int Min_MaxSum(vector<int> arr){
    int min = 0;
    int max =0;
    for(int i = 0; i<arr.size();i++){
        int count = i;
        int sum = 0;
        for(int j = 0;j<arr.size();j++){
            sum += arr[j]; 
        }
        sum = sum - arr[count];
        if(i==0){
            min = sum;
            max = sum;
        }
        else{
            if(sum<min){
                min = sum;
            }
            if(sum>max){
                max = sum;
            }
        }
    }
    cout << min <<" "<< max;
    //return 0;
}

int main(){
    vector<int> arr{1, 2, 3, 4, 5};
    Min_MaxSum(arr);
}