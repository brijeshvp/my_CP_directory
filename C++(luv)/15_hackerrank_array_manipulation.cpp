// https://www.hackerrank.com/challenges/crush/problem
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int ar[N];
int main(){
	int n,m;
	cin>>n>>m;
	while(m--){
		int a,b,d;
		cin>>a>>b>>d;
		// OLD code:-
		// for(int i=a;i<=b;++i){
		// 	ar[i]+=d;
		// }

		// NEW code:-
		ar[a]+=d;
		ar[b+1]-=d;
	}

	// NEW code:-
	// calculating prefix sum
	for(int i=1;i<=n;++i){
		ar[i]=ar[i]+ar[i-1];	
	}
	// finding maximum element from the array elements.
	// here array elements can also be 0, so we have taken mx=-1, so that we can compare -1 and 0 and take maximum =0.
	// int mx=-1;

	// also we have to take mx as long long type bcoz, we are storing array elements in mx, since our array is of type long long, this will be also of type long long.
	long long mx=-1;
	for(int i=1;i<=n;++i){
		if(mx<ar[i])
			mx=ar[i];
	}
	cout<<mx<<endl;


	// OLD time:- O(m*n + n) = O(m*n) = 2*10^5*10^7 = 2*10^12(cannot run in 1 sec).

	// NEW time:- O(m + n + n) = O(n) = 10^7(can run in 1 sec).
    return 0;
}