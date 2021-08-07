 // how to take so large number as an input?

// Ans:- take it as string and extract digits from string.

// we have seen the ranges int<=10^9, long int<=10^12, long long int<=10^18 and due to precision errors we cannot take large numbers as double.So if i want to take large number ~ 10^100 size then how to do?

// Soln:- using strings
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	// extracting last digit from the string as an integer(so that i can perform int operation on it)
	// s[s.size()-1] is last character of the string and if i typecast this to int then it will print ASCII value of last digit. So to get the integer value of it, subtract ASCII value of '0' from the ASCII value of that digit. 
	cout<<(int)s[s.size()-1];
	int last_digit = s[s.size() - 1] - '0';
	cout << last_digit;
    return 0;
}
