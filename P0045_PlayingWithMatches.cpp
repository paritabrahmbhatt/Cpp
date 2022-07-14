#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int a,b; cin>>a>>b;
	    int ans = a+b;
	    int count=0;
	    while(ans!=0){
	        int temp = ans%10;
	        ans /= 10;
	        if(temp==1) count +=2;
	        else if(temp ==7) count+=3;
	        else if(temp==4) count +=4;
	        else if(temp==2||temp==3||temp==5) count += 5;
	        else if(temp ==0||temp==6||temp==9) count+=6;
	        else count+=7;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
