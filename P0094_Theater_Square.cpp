#include <iostream>
using namespace std;
int main() {
    unsigned long long n,m,a;
    unsigned long long ans;
    cin>>n>>m>>a;
    unsigned long long int area = n * m;
    unsigned long long int block = a * a;
    if(area > block){
        ans = (((n+a)-1)/a) *(((m+a)-1)/a);
    }
    else{
        ans = 1;
    }
    cout<<ans;
    return 0;
}
