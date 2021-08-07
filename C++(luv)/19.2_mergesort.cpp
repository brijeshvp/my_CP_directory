#include<bits/stdc++.h>
using namespace std;

// merge() function -> given 2 sorted arrays, merging into a single sorted array.

// recursive sorting algorithm
// mergesort() function -> divide the array equally into 2 halves so that sorting both part individually becomes easy.


// we are declaring array globally so that we donot need to pass in each recursive mergesort().
const int N=1e5+10;
int a[N];

void merge(int l,int r,int mid){
	// Constructing left sub-array
	int l_size = mid - l + 1;
	int L[l_size + 1];
	// Constructing right sub-array
	int r_size = r - (mid+1) +1;
	int R[r_size + 1];
	// from index l to mid, we copy elements in left sub-array
	for(int i=0;i<l_size;++i){
		L[i] = a[i+l];
	}
	// from index mid+1 to r, we copy elements in right sub-array
	for(int i=0;i<r_size;++i){
		R[i] = a[i+mid+1];
	}
	// if in one sub-array elements are left then for comparison, we take INT_MAX in other sub-array so that in comparison, we can fill whole array. 
	L[l_size]=R[r_size]=INT_MAX;
	//NOTE:- INT_MAX is the greatest of all integers.

	// now comparing both sub-arrays and fill the combined sorted array.

	// initially, we need to start comparison from first index of both sub-arrays, so we initialize both left and right indexes to 0.
	int l_i=0;
	int r_i=0;
	// loop for comparison.
	for(int i=l;i<=r;++i){
		if(L[l_i]<=R[r_i]){
			a[i]=L[l_i];
			l_i++;
		}
		else{
			a[i]=R[r_i];
			r_i++;
		}
	}
}

void mergeSort(int l,int r){
	// if l==r that means only 1 element -> no need to sort.
	if(l<r){
		int mid = (l+r)/2;
		mergeSort(l,mid);
		mergeSort(mid+1,r);
		merge(l,r,mid);
	}
}

int main(){
	int n;
	cin>>n;
	// filling the array.
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	// calling mergeSort() function with 1st and last index of array.
	mergeSort(0,n-1);
	// printing the array.
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
    return 0;
}


// Time Complexity:- 
// 1. merge() function:- O(n) since it processes all the elements of both lists(which will be equal to total number of elements)
// 2. mergesort() function:- divides in 2 equal parts and recursively sort both sub-arrays-> n->2(n/2)... until only 1 element is left. and 1 element is itself sorted, so we can merge using merge() function -> O(logn) time.

// total time:- O(n*logn)