#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    long long n; cin>>n;
	    if(n==1) cout<<0<<"\n";
	    else{
	        long long e = n/2;
	        n -= e;
	        long long ans = n*(e*2);
	        cout<<ans<<"\n";
	    }
	}
	return 0;
}
