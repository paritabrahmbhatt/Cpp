#include<string>
#include<bits/stdc++.h>

using namespace std;

string dayOfProgrammer(int year) {
    string ans;
    if(year >=1700 && year <= 1917){
            if(year % 4 == 0) ans = "12.09.";
        else ans = "13.09.";
    }
    else if(year == 1918){
        ans = "26.09.";
    }
    else{
        if(year % 400 == 0 || (year%4==0 && year%100!=0)) ans = "12.09.";
        else ans = "13.09.";
    }
    return ans + to_string(year);
}

int main(){
    int year = 1700;
    cout<< dayOfProgrammer(year) << endl;;

}