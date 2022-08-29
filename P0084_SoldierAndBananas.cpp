#include <bits/stdc++.h>

using namespace std;
int main() {
    // Write C code here
    
    int k,w; long long n,fact=1;
    cin>>k>>n>>w;
    fact =((w*(w+1))/2)*k;
    if(n<fact) cout<< fact-n <<endl;
    else cout<<0<<endl;
    
    return 0;
}
