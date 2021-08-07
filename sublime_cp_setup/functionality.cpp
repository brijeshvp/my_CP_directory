#include<bits/stdc++.h>
using namespace std;

// Bit Manipulation functionalities:-
bool ithBitCheck(int num,int i){
	return num & (1<<i);
}
int ithBitReset(int num,int i){
	return num & ~(1<<i);
}
int ithBitSet(int num,int i){
	return num | (1<<i);
}
int ithBitToggle(int num,int i){
	return num ^ (1<<i);
}
bool checkOddEven(int num){
	return num & 1;
}
bool checkPowerOf2(int num){
	return !(num & (num-1));
}
int rightmostSetBitPos(int num){
	return log2(num & ~(num-1));
}
int rightmostSetBitReset(int num){
	return num & (num-1);
}
int resetFromLSBtoith(int num,int i){
	return ~((1<<(i+1))-1) & num;
}
int resetFromMSBtoith(int num,int i){
	return ((1<<i)-1) & num;
}

// GCD & LCM functionalities:-

// NOTE:- GCD(a,b) * LCM(a,b) = a*b

// TC:- GCD using Euclid's Algo :- O(logn)

// Euclid's Algo:-
int EuclidsGcd(int a,int b){
	if(a%b==0) return b;
	return EuclidsGcd(b,a%b);
}

// Variation of Euclid's Algo:-
int EuclidsGcdVar(int a,int b){
	if(b==0) return a;
	return EuclidsGcdVar(b,a%b);
}

// NOTE:- Always use in-built __gcd() function.
// Same TC:- O(logn)

// LCM in O(1)
int lcm(int a,int b){
	return (a*b)/__gcd(a,b);
}

int MOD = 1000000007;
// if a,b <= 10^9 and MOD~10^9 then this will work
// Binary Exponentiation - pure recursive
// a^b - pure recursive(avoid)
// TC:- O(log(power)) = O(log(b))
int binExpoRecur(int a,int b){
	// base case
	if(b==0) return 1;

	long long smallOutput = binExpoRecur(a,b/2);
	// if b is odd
	if(b&1) return (a*((smallOutput*smallOutput)%MOD))%MOD;
	// if b is even
	else return (smallOutput*smallOutput)%MOD;
}

// Binary Exponentiation - Iterative
// a^b - iterative
// TC:- O(log(power)) = O(log(b)) -> #bits in binary representation of b
int binExpoIter(int a,int b){
	int ans=1;
	while(b){
		if(b&1) ans=(ans*1LL*a)%MOD;
	
		a=(a*1LL*a)%MOD;
		b>>=1;
	}
	return ans;
}
int main(){
	// cout<<ithBitCheck(1,0);
	// cout<<ithBitReset(12,3);
	// cout<<ithBitSet(9,2);
	// cout<<ithBitToggle(11,0);
	// cout<<checkOddEven(198);
	// cout<<checkPowerOf2(16);
	// cout<<rightmostSetBitPos(14);
	// cout<<rightmostSetBitReset(14);
	// cout<<resetFromLSBtoith(63,3);
	// cout<<resetFromMSBtoith(31,2);

	// 1. taking log base 2 of a number(inbuilt functionality-accurate)
	// cout<<log2(6);

	int x=6;
	// 2. divide a number by 2
	// x >>= 1;

	// 3. multiply a number by 2
	// x<<=1;
	cout<<x<<endl;

	// char ch='A';
	// 4. uppercase to lowercase
	// ch |= ' ';

	// char ch='a';
	// 5. lowercase to uppercase
	// ch &= '_';
	// cout<<ch<<endl;

	cout<<binExpoRecur(2123123,1231231)<<endl;
	cout<<binExpoIter(2123123,1231231)<<endl;
	return 0;
}