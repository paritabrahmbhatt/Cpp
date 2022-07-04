#include <bits/stdc++.h>

using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int t1=0,t2=0,t3=0;
    if(d2-d1 < 0 && m1==m2 && y1==y2) t1 = (d1-d2) *15;
    if(m2-m1 < 0 && y1 == y2) t2 = (m1-m2)*500;
    if(y2-y1<0) t3 = 10000;
    if(y1<=y2 && m1<=m2 && d1<=d2)return 0;
    int temp = max(t1,t2);
    int ans = max(temp,t3);
    return ans;
}

int main() {
    cout << libraryFine(12,2,2022,10,2,2022);
}