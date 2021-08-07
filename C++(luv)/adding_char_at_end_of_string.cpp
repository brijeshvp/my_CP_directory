// adding same char @ end of string n times.
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	// method 1
	for(int i = 0; i < n; ++i){
		s.push_back('a');
	}
	// method 2
	for(int i = 0; i < n; ++i){
		s = s + 'a';
	}
    return 0;
}

// Which is better?
// method 1 Time Complexity:- O(1)->always(for each value of i->O(1))
// method 2 Time Complexity:- 
// O(s.size())->depends on size of string->for i=0 ->O(1), i=1->O(2),......, i=n->O(n+1)

// Conclusion:- method 1(push_back() function) is better.
