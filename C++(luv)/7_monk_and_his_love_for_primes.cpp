// https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/
// program template
#include<bits/stdc++.h>
using namespace std;

// func to make lowercase letter to uppercase.
char upper(char c){
	return c-32;
}

// func to make uppercase letter to lowercase.
char lower(char c){
	return c+32;
}

int main(){
	string s;
	cin>>s;
	// loop to iterate whole string and swap upper to lower and lower to upper case. 
	for(int i=0;i<s.size();++i){
		if(s[i]>='a' && s[i]<='z')
			s[i]=upper(s[i]);
		else if(s[i]>='A' && s[i]<='Z')
			s[i]=lower(s[i]);
	}
	// cout<<s;

	// variable to store the ASCII sum/difference.
	int result=0;
	// after swapping lower to upper and upper to lower case, if a character in a string is lowercase then subtract the ASCII value of that character else add the ASCII value of that character.
	for(int i=0;i<s.size();++i){
		if(s[i]>='a' && s[i]<='z')
			// here s[i] is a single character, and we know that calculation is always performed in higher data types so we didn't type casted s[i](char) to int(to get the ASCII value of it)
			result-=s[i];
		else if(s[i]>='A' && s[i]<='Z')
			// here s[i] is a single character, and we know that calculation is always performed in higher data types so we didn't type casted s[i](char) to int(to get the ASCII value of it)
			result+=s[i];
	}
	// cout<<result;

	// if the result of add/subtract of ASCII values is negative, then make it positive(that means always take absolute value of result)
	if(result<0)
		result=-result;

	// now by default, a number is always assumed to be prime.
	int is_prime=1;
	// loop to check whether the number is prime or not.
	for(int i=2;i<result;++i){
		if(result%i==0)
			is_prime=0;
	}
	cout<<is_prime;
    return 0;
}