#include<bits/stdc++.h>

using namespace std;

int diagonaldiff(vector<vector<int>> arr){
    int n = arr.size();
    int sumP = 0,sumN=0;
    for(int i = 0;i<n;i++){
        sumP += arr[i][i]; 
    }
    //cout<<sumP<<endl;
    int count = n-1;
    for(int i =0; i<n;i++){
        //cout<<arr[i][count]<<endl;
        sumN += arr[i][count];
        count -= 1;
    }
    //cout<<sumN<<endl;
    cout<< sumP <<" "<<abs(sumP-sumN)<<" "<<sumN<<endl;
    return 0;
}

int main(){
     vector<vector<int>> arr
    {
        {1, 2, 3},
        {4, 5, 6},
        {9, 8, 9}
    };
    diagonaldiff(arr);
    return 0;
}