// HackerEarth link:- https://www.hackerearth.com/problem/algorithm/capitalbaazi/
// program template
#include<bits/stdc++.h>
using namespace std;

// upper func to uppercase whole word.
char upper(char c){
	return (c-32);
}
int main(){
	// infinite loop to take any no. of words as input.
	while(true){
		string s;
		cin>>s;
		// if no word is given as input, then quit(end of words).
		if(s.size()==0){
			break;
		}
		// for loop to iterate whole word and capitalize it.
		for (int i = 0; i < s.size(); ++i)
		{
			s[i]=upper(s[i]);
		}
		// output each capitalized word on new line.
		cout<<s<<endl;
	}
    return 0;
}
