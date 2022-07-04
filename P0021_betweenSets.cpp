#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> a{2,4};
    vector<int> b{16,32,96};
    int l1 = a.size(), l2 = b.size(), final_count =0;
    for(int i=a[l1-1];i<=b[0]; i++){
        int count1 = 0, count2 = 0;
        for(int j = 0; j< l1;j++){
            if(i%a[j] != 0) break;
            else if(j==l1-1 && i%a[j]==0) count1++;
        }
        for(int k = 0; k<l2;k++){
            if(b[k]%i != 0) break;
            else if(k==l2-1 && b[k]%i==0) count2++;
        }
        cout<<count1<<" "<<count2<<endl;
        if(count1==1 && count2==1) final_count++;
    }
    return 0;
}