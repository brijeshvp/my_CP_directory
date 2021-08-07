// What is Pre-Computation Techniques?
// Code Optimisation using pre-computation.
// 1st pre-computation technique:-Hashing.
// What is Hashing(popular pre-computation technique)?





// Problem 1:-
/*
Given T test cases and in each test case a number N. Print its factorial for each test case % M, where M = 10^9 + 7.

Constraints:-
1 <= T <= 10^5
1 <= N <= 10^5
*/

#include<bits/stdc++.h>
using namespace std;
const int M= 1e9+7;
const int N= 1e5+10;
long long fact[N];

int main(){
	// pre-computing factorials.
	fact[0]=fact[1]=1;
	for (int i = 2; i < N; ++i)
	{
		fact[i] = fact[i-1]*i;
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		// old method:-
		// long long fact=1;
		// for (int i = 2; i <= n; ++i)
		// {
		// 	fact = (fact*i)%M
		// }
		// cout<<fact<<endl;
		cout<<fact[n]<<endl;
	}

// 	// OLD time:- O(T*N) = 10^10(will not run in 1 sec).
// 	// NEW time:- O(N) + O(T) = 10^5 + 10^5 ~ 10^5 that means it will run in 1 sec(<=10^7 iterations in 1 sec).


//     return 0;
// }





// Problem 2:-
/*
Given array a of N integers. Given Q queries and in each query given a number X, print count of that number in array.

Constraints:-
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
// declaring hash array(of size just greater then value of N given in constraint so that we can pre-compute and store count of all array elements in hash-array)
int hsh[N];

int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
		hsh[a[i]]++;
	}
	int q;
	cin>>q;
	while(q--){
		int x;
		cin>>x;

		// old method:-
		// int ct=0;
		// for (int i = 0; i < n; ++i)
		// {
		// 	ct++;
		// }
		// cout<<ct<<endl;
		cout<<hsh[x]<<endl;
	}

	// OLD time:- O(N) + O(Q*N) = O(N^2) = 10^10(will not run in 1 sec)

	// NEW time:- O(N) + O(Q) = O(N) ~= 10^5 that means it will run in 1 sec(<=10^7 iterations in 1 sec).
    return 0;
}