#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int a,b,c; cin>>a>>b>>c;
	    if(a>50 &&(a>b&&a>c)) cout<<"A"<<endl;
	    else if(b>50 && (b>a && b>c)) cout<<"B"<<endl;
	    else if(c>50 &&(c>a&&c>b)) cout<<"C"<<endl;
	    else cout<<"NOTA"<<endl;
	}
	return 0;
}
