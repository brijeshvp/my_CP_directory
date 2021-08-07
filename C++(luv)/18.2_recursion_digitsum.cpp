#include<bits/stdc++.h>
using namespace std;


// digit_sum

// last digit = n%10

// digit_sum(n) -> digit_sum(n/10) + last digit

// 1234 -> 4 + digit_sum(123)


int digit_sum(int n){
	// base case:- for digit 0, sum of digits=0.
	if(n==0) return 0;
	// recursion
	return digit_sum(n/10) + (n%10);
}
int main(){
	int n;
	cin>>n;
	cout<<digit_sum(n)<<endl;
    return 0;
}

// Time Complexity of recursions depends on 2 things:-
// 1. Number of recursive function calls.
// 2. What is complexity of each function.


// in above code:-
// 1. log(n) base 10 function calls(since each time n divides by 10-> n -> n/10 -> n/100 -> n/1000 -> .... -> 1) 
// 2. digit_sum function has only 2 lines ->constant time -> O(1)

// total time complexity:- O(logn*1) = O(logn)
