// program to check whether the string is palindrome or not(same from both sides->e.g. "aabaa")
#include<bits/stdc++.h>
using namespace std;

int main(){
	// Soln1:- 1st calculate reverse of the string as seen in previous program then compare string and its reverse.
	string str;
	cin >> str;
	// string str_rev;
	// for(int i = str.size()-1; i>=0; --i){
	// 	str_rev.push_back(str[i]);
	// }
	// if(str == str_rev){
	// 	cout<<"YES";
	// }
	// else{
	// 	cout<<"NO";
	// }


	// Soln2:- instead of calculating new string str_rev, compare 1st and last element of the same string(and keep doing this upto string length/2)
	bool is_palindrome;
	for(int i = str.size()/2; i>=0; --i){
		if(str[i] == str[str.size()-1-i]){
			is_palindrome=true;
		}
		else{
			is_palindrome=false;
		}
	}
	cout<<is_palindrome;
	    return 0;
}
