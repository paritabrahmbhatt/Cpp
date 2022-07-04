#include<bits/stdc++.h>
#include<iostream>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2){
    if((x2>x1 && v2>v1) ||(x1>x2 && v1>v2)){
        cout<<"NO";
    }
    else{
        if((x2-x1)%(v1-v2)==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}