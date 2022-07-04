#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    sort(ar.begin(), ar.end());
    int count = 0, i=0;
    while(i<n){
        if(ar[i]==ar[i+1]){
            count++;
            i+=2;
        }
        else{
            i++;
        }
    }
    return count;
}

int main(){
    vector<int> a;
    int n;
    cout<< "Enter the size of the vector"<<endl;
    cin>>n;
    cout<<"Enter the elements for the vector"<<endl;
    int x;
    for(int i = 0; i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    cout<<"Number of Pairs Matched: "<<sockMerchant(n,a)<<endl;
}