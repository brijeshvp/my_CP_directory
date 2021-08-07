#include<bits/stdc++.h>
using namespace std;

// Factorial of N

int fact(int n){
	// base case
	if(n==0) return 1;
	// recursion
	return n*fact(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<fact(n);
    return 0;
}

// Time Complexity of recursions depends on 2 things:-
// 1. Number of recursive function calls.
// 2. What is complexity of each function.


// in above code:-
// 1. n function calls(n->(n-1)->(n-2)->(n-3)->.....->1).
// 2. inside function only 2 lines(no loops)->constant time complexity -> O(1)

// thus total time complexity = O(n*1) = O(n).