#include<bits/stdc++.h>
using namespace std;

// const int n=1e2+10;
// int ar[n];

int main(){
	short int t;
	cin>>t;
	while(t--){
		int N,x,k;
		int f=0;
		cin>>N>>x>>k;
		for(int i=0;i<=N+1;i=i+k){
			if(i==x){
				f=1;
				break;
			}
		}

		for(int i=N+1;i>=0;i=i-k){
			if(i==x){
				f=1;
				break;
			}
		}

		if(f==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
    return 0;
}