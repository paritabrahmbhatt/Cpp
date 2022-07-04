#include<bits/stdc++.h>

using namespace std;

int beautifulDays(int i, int j, int k) {
    int ans = 0;
    for(int a=i;a<=j;a++){
        int x = a;
        int reverse = 0;
        while(x!=0){
            reverse = (reverse*10) + (x%10);
            x=x/10;
        }
        if(abs(reverse - a)%k ==0){
            ans++;
        }
    }
    return ans;
}
int main(){
    int x = 20, y = 23;
    int k=6;
    cout<< beautifulDays(x,y,k);
}