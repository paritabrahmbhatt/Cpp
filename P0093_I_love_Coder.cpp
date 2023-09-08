#include <iostream>
using namespace std;
int main() {
    int n, max, min, t, f, ans = 0;
    cin>>n;
    cin>>f;
    max = f;
    min = f;
    while(n>1){
        cin>>t;
        if(t<min){
            ans++;
            min = t;
        }
        else if(t>max){
            ans++;
            max = t;
        }
        n--;
    }
    cout << ans;
    return 0;
}
