#include<bits/stdc++.h>

using namespace std;

int subarrayDivision(vector<int> arr, int d, int m)
{
    int count = 0;
    int sum = 0;
    for(int i=0;i<=arr.size()-m;i++){
        sum = arr[i];
        for(int j=1;j<m;j++){
            sum += arr[i+j];
        }
        if(sum==d){
            count+=1;
        }
    }
    return count;
}

int main(){
    int d=4,m=2;
    vector<int> arr {2,2,1,3,2};
    int x = subarrayDivision(arr,d,m);
    cout<<x<<endl;
}