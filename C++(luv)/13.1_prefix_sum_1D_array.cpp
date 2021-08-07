/*
Given array a of N integers. Given Q queries and in each query given L and R print sum of array elements from index L to R(L,R included)

Constraints:-
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L,R <= N
*/

// without pre-computation technique
#include<bits/stdc++.h>
using namespace std;
// pre-defining array globally of size just greater than N constraint.
const int N = 1e5+10;
int a[N];
// NOTE:- in prefix sum, always use 1-indexed-based array(rather than 0-indexed-based array).So that calculations will become easy. 
int main(){
	int n;
	cin>>n;
	// we have used 1-indexed-based array, so we fill elements from 1 to n(not 0 to n-1).(0th index will be empty)
	// NOTE:- we know that in array of size n,we have indices from 0 to n-1, but here we have taken array of size greater than the N constraint, so in worst case also after (N-1)th index we have 10 more indexes, thats why we are able to access nth index in the loop. 
	for (int i = 1; i <=n; ++i){
		cin>>a[i];
	}
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		// here the array element constraint is 10^9 so sum of N elements=10^9*10^5 = 10^14 cannot be stored in int, thus we have used long long.
		long long sum=0;
		// since we are using 1-indexed-based array, we have to loop through l to r and store the sum(thats why we are using 1-indexed based array).
		for (int i =l; i <=r; ++i)
		{
			sum+=a[i];
		}
		cout<<sum<<endl;
	}
	// OLD time:- O(N) + O(Q*N) = O(N^2) = 10^10(cannot run in 1 sec)
    return 0;
}




// with pre-computation technique(prefix-sum in 1D array)
#include<bits/stdc++.h>
using namespace std;
// pre-defining array globally of size just greater than N constraint.
const int N = 1e5+10;
int a[N];
// declaring pf array to store prefix-sum.
// we use pf array to store sum of all the elements upto given index element.
// e.g. index 5 in pf array will store sum from elements from index 1 to 5.
int pf[N];
// NOTE:- in prefix sum, always use 1-indexed-based array(rather than 0-indexed-based array).So that calculations will become easy. 
int main(){
	int n;
	cin>>n;
	// we have used 1-indexed-based array, so we fill elements from 1 to n(not 0 to n-1).(0th index will be empty)
	// NOTE:- we know that in array of size n,we have indices from 0 to n-1, but here we have taken array of size greater than the N constraint, so in worst case also after (N-1)th index we have 10 more indexes, thats why we are able to access nth index in the loop. 
	for (int i = 1; i <=n; ++i){
		cin>>a[i];
		// refer logic in image(for below line)
		pf[i]= pf[i-1] + a[i];
		// NOTE:- when i=1, i-1=0, but since array is global, all elements are by default =0. So we are able to calculate properly if we use 1-index-based array.
		
	}
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		// here the array element constraint is 10^9 so sum of N elements=10^9(a[i]) * 10^5(N) = 10^14 cannot be stored in int, thus we have used long long.
		long long sum=0;
		
		// pf[r] will give sum from index 1 to r, and if we subtract sum from index 1 to l-1(pf[l-1]), we get sum from index l to r.
		cout<<pf[r] - pf[l-1]<<endl;
	}
	// NEW time:- O(N) + O(Q) = O(N) = 10^5(can run in 1 sec)
    return 0;
}