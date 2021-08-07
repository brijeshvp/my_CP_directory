// https://www.hackerearth.com/problem/algorithm/christmas-tree-of-height-n/
// program template
#include<bits/stdc++.h>
using namespace std;

// always when you declare array, make size of array as const(make a habit).
const int N=42;
int main(){
	int t;
	cin>>t;
	// constraint has value of N<=40 thus we precalculate pascal's triangle of length just greater than 40 so that we just use it of our required size.
	// also we make array type as long long bcoz while storing result of addition shown below, some elements may take greater values than range of int.
	long long a[N][N];
	// logic for pascal's triangle
	a[0][0]=1;
	for(int i=1;i<N;++i){
		a[i][0]=1;
		a[i][i]=1;
		for(int j=1;j<i;++j){
			a[i][j]=a[i-1][j-1] + a[i-1][j];
		}
	}

	while(t--){
		int n;
		cin>>n;
		// displaying pascal's triangle of our required length given by user.
		for(int i=0;i<n;++i){
			for(int j=0;j<=i;++j){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
    return 0;
}