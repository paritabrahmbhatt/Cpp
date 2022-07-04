using namespace std;
#include <iostream>
#include<string>
string appendAndDelete(string s, string t, int k) {
    int s_l = s.size();
    int t_l = t.size(),i;
    for(i=0;i<s_l;i++) if(s[i]!=t[i]) break;    
    if(k>= s_l+t_l) return "Yes";
    else if((k-(s_l+t_l-2*i))%2 == 0 && (k-(s_l+t_l-2*i)) >= 0) return "Yes";
    else return "No";
    return 0;
}

int main(){
    string s = "hackerhappy";
    string t = "hackerrank";
    int k = 9;
    cout << appendAndDelete(s,t,k)<<endl;

}