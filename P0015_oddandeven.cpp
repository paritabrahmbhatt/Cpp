#include<bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >>n;
    vector<string> s;
    string s1;
    for(int i=0;i<n;i++){
        cin >> s1;
        s.push_back(s1);
    } 
    for(int i=0;i<s.size();i++){
        string element = s[i];
        for(int j = 0;j<element.size();j++){
            cout<< element[j];
            j+=1;
        }
        cout<<" ";
        for(int j=1;j<element.size();j++){
            cout<< element[j];
            j+=1;
        }
        cout << endl;
    }
    return 0;
}
