#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	// taking array as input
	for(int i=0;i<n;++i){
		cin>>a[i];
	}

	// selection sort logic
	for(int i=0;i<n;++i){
		// we first take first element of unsorted part as min(using below loop)
		int minIndex=i;
		// then from next element upto last, we find min element(using below loop)
		for(int j=i+1;j<n;++j){
			if(a[j]<a[minIndex]){
				minIndex=j;
			}
		}
		// when we find min element, we replace it by first element in unsorted part.
		// NOTE:- swap() is the in built function in C++(so no need to define it).
		swap(a[i],a[minIndex]);
	}

	// printing the sorted array
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
    return 0;
}

// Time Complexity:- O(n^2) -> it is not used much bcoz in built sort algorithms in C++ has O(nlogn) complexity(which is used a lot). Also merge sort has O(nlogn) complexity.