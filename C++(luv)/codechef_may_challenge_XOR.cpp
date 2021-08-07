// https://www.codechef.com/MAY21C/problems/XOREQUAL
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int N;
		cin>>N;
		int count=0;
		for(int i=0;i<=2^N-1;i++){
			if((i^(i+1))==((i+2)^(i+3))){
					count++;
			}
		}
		cout<<count<<endl;
	}
    return 0;
}