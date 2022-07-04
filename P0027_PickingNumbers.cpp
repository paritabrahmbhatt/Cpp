#include <bits/stdc++.h>

using namespace std;
int pickingNumbers(vector<int> a) {
    int max = 0;
    for(int i =0; i<a.size();i++){
        int count = 1;
        for(int j=0;j<a.size();j++){
            if(i==j) continue;
            if(a[i]+1==a[j]||a[i]==a[j]) count++; 
        }
        if(max<count) max = count;
    
    }
    return max;
}

int main(){
    cout<<pickingNumbers()
}
