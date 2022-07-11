#include <iostream>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n,flag=0;cin>>n;
	    map<int,int> mp;
	    for(int i=0; i<n;i++){
	        int temp;cin>>temp;
	        mp[temp]++;
	    }
	    for(auto it:mp){
	        if(it.second % it.first != 0) {
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 1) cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	}
	return 0;
}
