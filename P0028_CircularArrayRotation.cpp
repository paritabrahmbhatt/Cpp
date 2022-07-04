#include <bits/stdc++.h>

using namespace std;

int main(){    
    vector<int> a;
    int k = 2;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    //cout<<a[0]<<endl;

    vector<int> queries;
    queries.push_back(0);
    queries.push_back(2);

    vector<int> b(a.size(),0);
    //b.insert(b.begin()+1,a[2]);
    for(int i=0;i<a.size();i++){
        int n = i+k;
        if(n > (a.size()-1)){
            int index = n %(a.size());
            //b.insert(b.begin()+index,a[i]);
            b[index]=a[i];
        }
        else{
            //b.insert(b.begin()+n, a[i]);
            b[n]=a[i];
        }
    }
    for(int i = 0; i<queries.size();i++){
        int a = queries[i];
        cout<< b[a]<<endl;
    }
    //cout<<b[2]<<endl;
    //cout<<a[0]<<endl;
    return 0;

}