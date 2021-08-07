// https://www.codechef.com/problems/GCDQ

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int N,Q;
		cin>>N>>Q;
		// defining array of size just greater than constraint of N.
		int a[N+10];
		int forward[N+10];
		int backward[N+10];
		// gcd of any number with 0 is 0. So if we computer forward[1] it will give gcd of 0th element and 1st element.(but since 1-indexed-based array no 0th element),so we store gcd of 0th element =0.
		// also backward[n] will give gcd of all elements from nth element upto all the elements to its right(but no element after nth element), so we store gcd of n+1th element=0.
		forward[0] = backward[N+1] = 0;
		// using 1-indexed-based array(so that pre-computation becomes easy).
		for(int i=1;i<=N;++i){
			cin>>a[i];
		}
		for(int i=1;i<=N;++i){
			forward[i] = __gcd(forward[i-1],a[i]);
		}
		for(int i=N;i>=1;--i){
			backward[i]=__gcd(backward[i+1],a[i]);
		}
		while(Q--){
			int l,r;
			cin>>l>>r;
			// int gc=0;
			// for(int i=1; i<=l-1;++i){
			// 	gc= __gcd(gc,a[i]);
			// }
			// for(int i=r+1; i<=N;++i){
			// 	gc= __gcd(gc,a[i]);
			// }
			// cout<<gc<<endl;


			// new code:-
			cout<<__gcd(forward[l-1],backward[r+1])<<endl;
		}
	}
	// O(T*(N + Q*(N+N)) = O(T*Q*N) but it is said in constraints of subtask 2 that:- "Sum of N over all the test cases will be less than or equal to 10^6" that means T*N = 10^6. Thus time:- O(10^6*Q) = 10^6*10^5 = 10^11(cannot run in 1 sec).
	// NOTE:- __gcd() function takes O(log(max of 2 numbers given input to it)) complexity, but it can be ignored because of this much big complexity of O(T*Q)
    return 0;
}