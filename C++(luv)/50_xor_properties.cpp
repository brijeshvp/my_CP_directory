#include<bits/stdc++.h>
using namespace std;

// int main(){
// /*
// 	// XOR working:-
// 	1 0 -> 1
// 	0 1 -> 1
// 	0 0 -> 0
// 	1 1 -> 0
	

// 	Properties of XOR:-
// 	// 1. XOR of same numbers = 0.
// 	// x ^ x = 0 
// 	1 0 1
// 	1 0 1
// 	-----
// 	0 0 0 
	
// 	// 2. XOR of a number with 0 is same number.
// 	// x ^ 0 = x
// 	1 0 1
// 	0 0 0
// 	-----
// 	1 0 1

// 	// 3. XOR is associative.
// 	// x^y^z = x^z^y = y^x^z = y^z^x = z^x^y = z^y^x
// */


// 	// swap 2 numbers using XOR without using any extra variable:-
// 	int a=4, b=6;

// 	a = a^b;

// 	// since a=a^b it is substituted in below expression.
// 	b = a^b; //--> b = (a^b)^b --> b=a
// 	// we know b^b=0 thus a is stored in b.


// 	// since a=a^b and b=a substitute both values in below expression.
// 	a = a^b; //--> a = (a^b)^a --> a=b
// 	// we know a^a=0 thus b is stored in a.

// 	// In this way, both the numbers are swapped.
// 	cout<<a<<" "<<b<<"\n"; 

// }



/*
Question:-
Given array a of n integers. All integers are present in event count except one.
Find that one integer which has odd count in O(N) time complexity and O(1) space;

Constraints:-
N < 10^5
a[i] < 10^5
*/

// NOTE:- we can do this question using hashing by storing count of each ets, but it will take O(N) space for hash array. So we can't use hashing.

// Use XOR properties:-
// take XOR of all elts, the elts having even count will cancel each other and only odd count elt xor with 0 will be left in the result which is that odd elt only.
int main(){
	int n;
	cin>>n;
	int x;
	int ans=0;
	// NOTE:- we donot need to store array elts also, just keep taking XORs of all elts using loop.
	for(int i=0;i<n;++i){
		cin>>x;
		ans^=x;
	}
	cout<<ans<<"\n";
}


// Inputs:-
/*
9
2 4 6 7 7 4 2 2 2
*/

// O/P:- 6