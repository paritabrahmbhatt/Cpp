#include <iostream>
using namespace std;
int main() {
    int n, g=1;
    string a, b;
    cin>>n;
    cin>>a;
    while(n>1){
        cin>>b;
        g = (a!=b) ? g+1 : g; 
        a = b;
        n--;
    }
    cout << g;
    return 0;
}
