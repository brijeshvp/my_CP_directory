#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int res = (sqrt(1 + 8.0*n) - 1)/2;
		cout<<res<<"\n";
	}
    return 0;
}