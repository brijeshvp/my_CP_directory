#include<bits/stdc++.h>
using namespace std;

// this ans vector of vector will store all the permutations of a given vector.
vector<vector<int> > ans;

int main(){
	int n;
	cin>>n;
	// defining vector of size n
	vector<int> v(n);
	// filling the vector
	for(auto &i : v){
		cin>>i;
	}

	// we are using do while loop, so first time we will push sorted permutation without checking for next_permutation.
	sort(v.begin(),v.end());
	do{
		ans.push_back(v);
	}while(next_permutation(v.begin(),v.end()));
	// printing vector of vector(all the permutations)
	for(auto v1 : ans){
		for(auto v2 : v1){
			cout<<v2<<" ";
		}
		cout<<endl;
	}
	return 0;
}