#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'repeatedString' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. LONG_INTEGER n
 */

long repeatedString(string s, long n) {
    long x = s.size();
    long divi = floor(n/x);
    long rep = 0;
    for(int i =0;i<x;i++){
        if(s[i] == 'a'){
            rep++;
        }
    }
    rep *= divi;
    if(n%x >0){
        long z = n%x;
        for(int i= 0; i<z;i++){
            if(s[i] == 'a'){
                rep++;
            }
        }
    }
    return rep;
}

int main(){
    string s;
    int n;
    cout<<"Enter the string and a number"<<endl;
    cin>>s>>n;
    cout << repeatedString(s,n);
    return 0;
}

