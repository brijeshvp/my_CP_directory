#include<bits/stdc++.h>
using namespace std;

// this ans vector of vector will store all the permutations of a given vector.
vector<vector<int> > ans;

void permute(vector<int> &a,int idx){
	// base condition(if idx goes out of vector(processed all elements, then push that processed vector as one permutation in ans vector of vector) and return)
	if(idx == a.size()){
		ans.push_back(a);
		return;
	}

	for(int i=idx;i<a.size();++i){
		swap(a[i],a[idx]);
		permute(a,idx+1);
		swap(a[i],a[idx]);
	}
}

int main(){
	int n;
	cin>>n;
	// defining vector of size n
	vector<int> v(n);
	// filling the vector
	for(auto &i : v){
		cin>>i;
	}

	permute(v,0);
	// printing vector of vector(all the permutations)
	for(auto v1 : ans){
		for(auto v2 : v1){
			cout<<v2<<" ";
		}
		cout<<endl;
	}
	return 0;
}