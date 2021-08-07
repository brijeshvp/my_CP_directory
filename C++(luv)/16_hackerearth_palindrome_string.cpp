// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ispalin/



// NOTE:- in a palindrome string of even length, all the characters occurs even number of times. And in a palindrome string of odd length, only 1 character is of odd length, rest all the characters are of even length.
// Conclusion:- there can be 0 or 1 characters of odd length.
#include<bits/stdc++.h>
using namespace std;

// new code:-
const int N=1e5+10;
int hsh[N][26];
int main(){
	int t;
	cin>>t;
	while(t--){ 
		for(int i=0;i<N;++i){
			for(int j=0;j<26;++j){
				hsh[i][j]=0;
			}
		}
		int n,q;
		cin>>n>>q;
		string s;
		// NOTE:- defining string of size n takes n time complexity.
		cin>>s;
		for(int i=0;i<n;++i){
			hsh[i+1][s[i]-'a']++;
		}
		for(int i=0;i<26;++i){
			for(int j=1;j<=n;++j){
				hsh[j][i]+= hsh[j-1][i];
			}
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			// int hsh[26];
			// for(int i=0;i<26;++i){
			// 	hsh[i]=0;
			// }
			// l--;r--;
			// for(int i=l;i<=r;++i){
			// 	hsh[s[i]-'a']++;
			// }
			int oddCt=0;
			// for(int i=0;i<26;++i){
			// 	if(hsh[i]%2!=0) oddCt++;
			// }
			for(int i=0;i<26;++i){
				int charCt = hsh[r][i] - hsh[l-1][i];
				if(charCt%2!=0) oddCt++;
			}
			if(oddCt>1) cout<<"NO\n";
			else cout<<"YES\n";
		}
	}
	// OLD time:-
	// O(t*(n+ q*(26+n+26)))
	// O(t*q*n)= 10*10^5*10^5 = 10^11(cannot run in 1 sec)

	// NEW time:-
	// O(t*(n+n*26+q*26))
	// O(t*n*26) = 10*10^5*26 = 10^6 (can run in 1 sec)
    return 0;
}