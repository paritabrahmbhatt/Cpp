#include <bits/stdc++.h>
#include<string>
using namespace std;
int main() {
    // Write C++ code here
    int x,a;
    cin>>x;
    string answer = "EASY";
    while(x>0){
        cin>>a;
        if(a==1){
            answer = "Hard";
            break;
        }
        x--;
    }
    cout<<answer;
}
