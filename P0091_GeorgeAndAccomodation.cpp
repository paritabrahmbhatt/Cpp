#include <iostream>
using namespace std;
int main() {
    int n, p,q, answer = 0;
    cin>>n;
    while(n>0){
        cin>>p>>q;
        answer = (q-p >= 2) ? answer+1 : answer;
        n--;
    }
    cout << answer;
    return 0;
}
