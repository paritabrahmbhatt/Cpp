#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int simpleArraySum(vector<int> ar) 
{
    int n = ar.size();
    int sum = 0;
    for(int i =0; i<n;i++)
        sum = sum + ar[i];
    cout<<sum<<"\n";
    return 0;
}

int main(){
    int n;
    vector<int> ar;
    cin >> n;
    for(int i = 0;i<n;i++){
        int input;
        cin >> input;
        ar.push_back(input);
    }
    simpleArraySum(ar);
    return 0;
}