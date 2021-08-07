// https://www.codechef.com/MAY21C/problems/SOLBLTY
#include<bits/stdc++.h>
using namespace std;

int main(){
	short int t;
	cin>>t;
	while(t--){
		int X,A,B;
		cin>>X>>A>>B;
		int max_sol;
		max_sol=A+(100-X)*B;
		int ans=max_sol*10;
		cout<<ans<<endl;
	}
    return 0;
}