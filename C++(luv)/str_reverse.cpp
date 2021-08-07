// program to print reverse of the given string
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin >> str;
	string str_rev;
	for (int i = str.size() - 1; i>= 0; --i)
	{
		// this should be avoided bcoz generally we should not add characters to the string
		// reason:- time complexity(we will see the reason in chapter of time complexity later)

		// str_rev = str_rev + str[i];

		// Soln:-
		// push_back() function adds character in a string from backside
		str_rev.push_back(str[i]);
	}
	cout<<str_rev;
    return 0;
}
