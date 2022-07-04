#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int AppleandOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    //int m = apples.size();
    //int n = oranges.size();
    int count_a = 0;
    int count_o = 0;
    for(int i = 0; i<apples.size();i++){
        apples[i] += a;
    }
    for(int i = 0; i<oranges.size();i++){
        oranges[i] += b;
    }
    for(int i = 0; i<apples.size();i++){
        if(apples[i]>=s && apples[i]<=t){
            count_a +=1;
        }
    }
    for(int i = 0; i<oranges.size();i++){
        if(oranges[i]>=s && oranges[i]<=t){
            count_o += 1;
        }
    }
    cout<< count_a<<endl;
    cout<< count_o;
}

int main(){
    int s=7,t=11,a=5,b=15;
    vector<int> apples{-2,2,1};
    vector<int> oranges{5,-6};
    AppleandOranges(s,t,a,b,apples,oranges);
    return 0;
}