#include<bits/stdc++.h>
using namespace std;
// method 1(without bit manipulation): repeatedly divide a number by 2, if we get 1 -> its divisible by 2 else not.
// method 2(with bit manipulation): 

bool ispowerof2(int n){
	// to handle corner case of n=0, we && whole expression with n itself.
	return (n && !(n & n-1));
}

int main(){
	cout<<ispowerof2(16)<<endl;	
	return 0;
}