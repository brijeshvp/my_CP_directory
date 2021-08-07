#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i=10;i>=0;--i){
		cout<<((num>>i)&1);
	}
	cout<<endl;
}

int main(){
	// method-1:
	// even numbers have LSB=0 and odd numbers have LSB=1
	// to check a number is odd or even bitwise AND that number with 1 -> if result is non-zero than that number is odd. if result is zero than that number is even.

	// this (num & 1) bit method to check for odd/even is faster than (num%2==0) method. 
	
	// for(int i=0;i<8;++i){
	// 	printBinary(i);
	// 	if(i&1){
	// 		cout<<"odd\n";
	// 	}else{
	// 		cout<<"even\n";
	// 	}
	// }


	// method-2:
	// to divide a number by 2 use right shift(>>)
	// NOTE:- this is integer(floor) division and not float division(result will not be in decimal(real))

	// int n=5;
	// cout<<(n>>1)<<endl;

	// to multiply a number by 2 use left shift(<<)

	// cout<<(n<<1)<<endl;


	// in binary search, we were doing '(hi+lo)/2', instead we can do '(hi+lo)>>1'.

	// converting uppercase to lowercase letters and vice-versa using bit manipulation
	// to observe the similarity between uppercase and lowercase letters in binary, lets print binary of 1st five uppercase and lowercase letters.

	// NOTE:- each character has a ASCII value, 'A'=65,'a'=97 binary of character is binary of ASCII values of character.

	// for(char c='A';c<='E';++c){
	// 	cout<<c<<endl;
	// 	printBinary(int(c));
	// }
	// for(char c='a';c<='e';++c){
	// 	cout<<c<<endl;
	// 	printBinary(int(c));
	// }

	// so in uppercase letters, previous bit of MSB which is set(5th bit) is 0 while this bit is 1 in lower case letters.
	// so to convert uppercase to lowercase, we need to set this 5th bit in uppercase letters.
	// we can set ith bit(5th bit) by ORing with (1<<5)
	// Also to convert from lowercase to uppercase, we need to unset this 5th bit in lowercase.
	// we can unset ith bit(5th bit) by ANDing with ~(1<<5) (compliment of 1<<5)

	// uppercase to lowercase
	// char A='A';
	// char a= A | (1<<5);
	// cout<<a<<endl;

	// lowercase to uppercase
	// cout<< char(a & ~(1<<5))<<endl;


	// this is good but can we make it more simple?	-> 	Yes
	// (1<<5) is nothing 32.
	// and 32 is the ASCII value of space
	// so to convert uppercase to lowercase:-
	// ASCII of A = 65 and a=97 and space = 32 -> (A + 32 = a) -> (65 + 32 = 97), here plus means OR.

	// cout<<char('A' | ' ')<<endl;

	// to convert lowercase to uppercase:-
	// we need to AND with a number having 5th bit=0 and rest all bits=1(to unset 5th bit to make it uppercase)
	// but we cannot represent ~(1<<5) with any character(its ASCII value does not have any character corresponding to it) since this is too big number and ASCII numbers are only 0 to 255
	// but we need a number having 5th bit unset and rest all bits set upto bits with which we can represent all uppercase and lowercase characters
	// this can be done using '_'(underscore) 

	// printBinary(int('_'));
	// cout<<char('a' & '_')<<endl;



	// Topic:- clear all LSBs upto ith bit:-
	// method-1:- loop till ith bit from rightside(from bit 0) and unset that bits
	// method-2:- without loops:-

	// e.g. we want to clear upto 4th bit all LSB in 59	-> output:- 00000100000
	// make a number having 0's upto 4th bit and then all 1's(11111100000) and AND with that number. 
	// but it is difficult to make such number so better is to make inversion of such number(00000011111)
	// now this inversion number can be obtained easily using (00000100000-1). We can obtain all 1's from power of 2 number.
	// we have seen in previous lecture that (any power of 2 number - 1) is all bits set from next bit.
	/*
		59 -> 									00000111011
		all bits until 4th bit=0				11111100000
		inversion of above number				00000011111
		above inversion can be obtained as		00000100000-1
	*/

	// int a=59;
	// printBinary(a);
	// int i=4;
	// int b= a & (~((1<<(i+1))-1));
	// printBinary(b);




	// Topic:- clear all MSBs upto ith bit:- 
	// method-1:- loop till ith bit from leftside(from nth bit) and unset that bits
	// method-2:- without loops:-

	// e.g. we want to clear upto 4th bit all MSB in 59	-> output:- 00000001011
	// make a number having 1's upto 3rd bit and then all 0's(00000001111) and AND with that number. 
	// now this number can be obtained easily using (00000010000-1). We can obtain all 1's from power of 2 number.
	// we have seen in previous lecture that (any power of 2 number - 1) is all bits set from next bit.

	/*
		59 -> 									00000111011
		all bits until 4th bit=1				00000001111
		above number can be obtained as			00000010000-1
	*/

	// int a=59;
	// printBinary(59);
	// int i=3;
	// int b = (a & ((1<<(i+1))-1));
	// printBinary(b);

	// Topic:- to check whether a number is power of 2 or not:-
	// logic:- if (n & (n-1)) is true, it is not power of 2, else it is power of 2.
 	// not power of 2
	int n=15;
	if(n&(n-1)){
		cout<<"not power of 2"<<endl;
	}else{
		cout<<"power of 2"<<endl;
	}

	// power of 2
	n=16;
	if(n&(n-1)){
		cout<<"not power of 2"<<endl;
	}else{
		cout<<"power of 2"<<endl;
	}
}