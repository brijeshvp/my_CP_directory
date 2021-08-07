#include<bits/stdc++.h>
using namespace std;

// sum of array(using recursion)

// function defn:-sum(n,a) ->sum of elements in array(a) uptill n indexes.

// sum(n,a) = a[n] + sum(n-1,a) 

int sum(int n,int a[]){
	// base case:- array index starts from 0, so if index is negative(becomes -1), then we return sum=0.
	if(n<0) return 0;
	// recursion
	return a[n] + sum(n-1,a);
}


int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	// since we want sum of whole array elements, we pass last index(n-1) in sum function.
	cout<<sum(n-1,a)<<endl;
    return 0;
}


// Time Complexity of recursions depends on 2 things:-
// 1. Number of recursive function calls.
// 2. What is complexity of each function.


// in above code:-
// 1. n function calls(since array has n indexes) 
// 2. sum function has only 2 lines ->constant time -> O(1)

// total time complexity:- O(n*1) = O(n) 