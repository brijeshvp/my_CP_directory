// why print answer Modulo M?
// why M=10^9 + 7?
// It is for 2 reasons:- 
// 1. 10^9 + 7 is very close to int max(10^9),so if we take modulo with this M, we can store the result in int type(donot need of long long)
// 2. Since 10^9 + 7 is a prime number, we can find multiplicative inverses from 1 to 10^9 + 7.

/*
Given a number N. Print its factorial.
Constraints:-
1 <= N <= 100

print answer modulo M,
where M=47

A % M result will be always smaller than M.
We have to use properties of modulo bcoz we cannot calculate factorial of number greater than 20, so how we can store its modulo.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	int M=47;
	long long fact=1;
	for (int i = 1; i <=n; ++i)
	{
		// problem
		// fact = (fact * i);
		// solution:-
		fact = (fact * i)%M;	//this will print factorial of any number modulo M(where M is usually a prime number).
		// formula(property):- (a*b)%M = ((a%M)*(b%M))%M
	}
	cout<<fact<<endl;
    return 0;
}