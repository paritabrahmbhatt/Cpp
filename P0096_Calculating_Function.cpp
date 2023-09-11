#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    unsigned long long n;
    cin>>n;
    signed long long sum;
    unsigned long long odd, even;
    odd = (n%2==0) ? (n/2) : ((n+1)/2);
    even = (n%2==0) ? (n/2) :((n-1)/2);
    
    sum = ((odd * odd) * (-1)) + (even*(even+1));
    
    cout<<sum;
    return 0;
}
