#include<bits/stdc++.h>
using namespace std;
int utopianTree(int n) {
    int ans = 0;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            ans++;
        }   
        else{
            ans*=2;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<< "Enter the value"<<'\n';
    cin>> n;
    cout<<utopianTree(n)<<endl;
}