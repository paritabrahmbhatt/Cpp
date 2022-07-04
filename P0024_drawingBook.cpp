#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int pageCount(int n, int p) {
    int c_front=0,c_back=0;
    if(p==1) return 0;
    else{
       if(p%2==0)
           c_front = p/2;
        else {
            c_front = (p-1)/2;
        }
        
    }
    if(p==n) return 0;
    else{
        int c;
        if(n%2 == 0) {
            if(p%2 != 0){
                if(n-p == 1) c_back = 1;
                else{
                    if(p%2 == 0) c_back = (n-p-1)/2;
                    else c_back = (n-p)/2;
                }
            } 
            else c_back = (n-p)/2;
        }
        else{
            if(p%2 == 0){
                if(n-p==1) return 0;
                else{
                    if(p%2==0) c_back=(n-p)/2;
                    else c_back = n-p-1;
                } 
            } 
            else {
                if(n-p==1) return 0;
                else{
                    if(p%2==0)c_back = (n-p-1)/2;
                    else c_back = (n-p)/2;
                }
            }
        }
    }
    if(c_front <= c_back) return c_front;
    else return c_back;
}

int main(){
    int page = 6, n = 5;
    int ans = pageCount(page,n);
    cout<<ans<<endl;
}