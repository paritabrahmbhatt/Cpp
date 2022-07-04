#include<bits/stdc++.h>
#include<iostream>

using namespace std;

string timeconversion(string s)
{
    int n = s.size();
    if(s[n-2] == 'A'){
        if(s[0]=='1' && s[1]=='2'){
            s[0] ='0';
            s[1] = '0';
            return s;
        }
        else{
            return s;
        }
    }
    else{
        if(s[0]=='1' && s[1]=='2'){
            return s;
        }
        else{
            string a = s.substr(0,2);
            int b = stoi(a); 
            b = b+12;
            stringstream c;
            c << b;
            string str = c.str();
            s[0] = str[0];
            s[1] = str[1];
            return s;

        }
    }
}

int main(){
    string s = "12:00:00 AM";
    string a = timeconversion(s);
    cout<<a;
}

