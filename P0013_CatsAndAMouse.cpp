#include <bits/stdc++.h>

using namespace std;

string catsandmouse(int x, int y, int z){
    if(abs(x-z)<abs(y-z)){
        return "Cat A";
    }
    else if(abs(x-z)>abs(y-z)){
        return "Cat B";
    }
    else{
        return "Mouse C";
    }
}

int main(){
    int x=2,y=5,z=4;
    string q = catsandmouse(x,y,z);
    cout<<q<<endl;
}