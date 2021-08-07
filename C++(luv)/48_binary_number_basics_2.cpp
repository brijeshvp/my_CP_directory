#include<bits/stdc++.h>
using namespace std;


// (num>>i) brings ith bit at 0th bit position and ANDing with 1 will give that ith bit of given number and we keep printing this bits to print whole binary number.
void printBinary(int num){
	for(int i=10;i>=0;--i){
		cout<<((num>>i)&1);
	}
	cout<<endl;
}

// NOTE:- we can also use this above logic of printBinary for counting number of set(1)  bits in given number
// int ct=0;
// void countSet(int num){
// 	for(int i=10;i>=0;--i){
// 		ct+= ((num>>i)&1);
// 	}
// }
int main(){
	// to check whether ith bit in a number is set or not:
	// AND that number with a number having only ith bit set(1) and rest all the bits=0, if the result is 0 then ith bit in that number is unset(0). if result is non-zero then ith bit in the number is set(1).


	// Property 1:-
	// but how to get a number having only ith bit set and rest all bits=0?
	// Ans: 1<<i
	// 1<<0 = 1     -> 0th bit set
	// 1<<1 = 10    -> 1st bit set
	// 1<<2 = 100   -> 2nd bit set
	// 1<<3 = 1000  -> 3rd bit set
	// 1<<4 = 10000	-> 4th bit set


	// Property 2:-
	// also we know that 1<<i is the powers of 2.
	// so any power of 2, minus 1 in binary is all bits set(1) and 1 bit less than that number.

	// previous number of power of 2 is all bits 1, e.g. 1,3,7,15,31...


	// e.g-1 solve in  book 100 = 4 is power of 2.  100 - 001 = 011 = 11
	// e.g-2 solve in  book 1000 = 8 is power of 2.  1000 - 0001 = 0111 = 111
	// e.g-3 solve in  book 10000 = 16 is power of 2.  10000 - 00001 = 01111 = 1111



	// // code for how to check ith bit:-  
	// int num=9;
	// printBinary(num);
	// int i=1;
	// if((num & (1<<i))!=0){
	// 	cout<<"bit is set"<<endl;
	// }else{
	// 	cout<<"bit is not set"<<endl;
	// }


	// // code for setting ith bit:- making ith bit = 1
	// // Logic:- 1<<i will give only ith bit set rest all bits = 0 so OR that with given number it will give ith bit set in given number.

	// int num=9;
	// printBinary(num);
	// int i=1;
	// printBinary(num | (1<<i));	//ith bit will be set(1) in num


	// // code for unsetting ith bit:- making ith bit = 0
	// // // Logic:- AND given number with a number having ith bit=0 and rest all bits = 1.
	// // this is nothing but inversion of ith bit=1 and rest all bits = 0 -> it is inversion of all bits in (1<<i) 
	// // but how to invert bits in a number?
	// // ~ operator inverts all the bits in a given number
	// int num=9;
	// printBinary(num);
	// printBinary(~num);
	// int i=0;
	// printBinary(num & ~(1<<i));	//ith bit will be unset(0) in num



	// // Code for toggling a bit:-
	// // Logic:- make a number which has only ith bit =1(bit which you want to toggle) and rest all bits=0 -> (1<<i) and XOR that with given number.
	// // we know that 1^1=0 and 0^1=1
	// // right bit=1 is only ith bit set in 1<<i and left bit is bit which you want to toggle in given number and result of XOR is the toggling result(left bit and result are toggle of each other).
	// int num=9;
	// printBinary(num);
	// int i=0;
	// printBinary(num ^ (1<<i));



	// Summary:-
	// 1. find ith bit is set or not(AND):- [num & (1<<i)] if zero->bit is unset else set
	// 2. set ith bit(OR):- [num | (1<<i)]
	// 3. unset ith bit(AND+TILDA):- [num & ~(1<<i)]
	// 4. toggle ith bit(XOR):- [num^(1<<i)]

	// Code for counting number of set(1) bits in a given number:-
	int ct=0;
	// since num is integer number->32 bits, we will make a loop of 32(from 31 to 0) and use the same logic to check if the bit is set(1) or not
	int num=13;
	for(int i=31;i>=0;--i){
		if((num & (1<<i))!=0){
			ct++;
		}
	}
	cout<<ct<<endl;

	// we also have in-built method in STL to count #set bits in a given number
	// to calculate #set bits in int number:-
	cout<<__builtin_popcount(num)<<endl;
	// to calculate #set ibts in long long number:-
	cout<<__builtin_popcountll((1LL<<32)-1)<<endl;
	return 0;
}