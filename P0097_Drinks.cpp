#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    float n;
    cin>>n;
    float ans =0;
    float t;
    for(int i=0; i<n;i++){
        cin>>t;
        ans += t;
    }
    ans = ans / n;
    printf("%.9f\n",ans);

    return 0;
}
