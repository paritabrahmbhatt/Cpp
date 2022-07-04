#include<bits/stdc++.h>

using namespace std;

vector<int> permutationEquation(vector<int> p){
    vector<int> ans;
    for(int i = 1; i<=p.size();i++){
        for(int j = 0; j<p.size();j++){
            if(i==p[j]){
                for(int k = 0; k<p.size();k++){
                    if(p[k]==(j+1)){
                        cout<<k+1<<endl;
                    }
                }
                break;
            }
        }
    }
    //return ans;    
}

int main(){
    vector<int> p{5,2,1,3,4};
    permutationEquation(p);
}