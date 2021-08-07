/*
Given 2D array a of N*N integers. Given Q queries and in each query given a, b, c and d. print sum of rectangle represented by (a,b) as top left point and (c,d) as bottom right point
(refer image for better understanding of question)

Constraints:-
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= N
*/

// OLD code:- without pre-computation
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int ar[N][N];
int main(){
	int n;
	cin>>n;
	// here also filling array as 1-indexed-based(rather than 0-indexed-based), so that calculations becomes easy.
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			cin>>ar[i][j];
		}
	}
	int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		// here also array elements constraint is 10^9 and N is 10^3 so sum will be 10^3*10^3*10^9 = 10^15 which cannot be stored in int, so we use long long int.
		long long sum=0;
		// loop for x co-ordinates(row)
		for(int i=a; i<=c; ++i){
			// loop for y co-ordinates(column)
			for(int j=b; j<=d; ++j){
				sum+=ar[i][j];
			}
		}
		cout<<sum<<endl;
	}
	// OLD time:- O(N^2) + O(Q*N^2) = O(Q*N^2) = 10^5 * 10^3 * 10^3 =  10^11(cannot run in 1 sec)
    return 0;
}





// NEW code:- with prefix sum in 2D array
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int ar[N][N];
// declaring pf array to store prefix-sum of 2D array
// it will store sum of all the elements from 1,1 upto i,j
long long pf[N][N];
int main(){
	int n;
	cin>>n;
	// here also filling array as 1-indexed-based(rather than 0-indexed-based), so that calculations becomes easy.
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			cin>>ar[i][j];
			// refer logic of below line in image
			pf[i][j] = ar[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
		}
	}
	int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		// refer logic of below line in image
		cout<<pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1]<<endl;
	}
	// NEW time:- O(N^2) + O(Q*) = O(N^2) = 10^3 * 10^3 =  10^6(can run in 1 sec)
    return 0;
}