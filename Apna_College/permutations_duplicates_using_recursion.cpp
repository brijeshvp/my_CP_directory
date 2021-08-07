#include<bits/stdc++.h>
using namespace std;

void helper(vector<int> a, vector<vector<int> > &ans,int idx){
	// base condition(if idx goes out of vector(processed all elements, then push that processed vector as one permutation in ans vector of vector) and return)
	if(idx == a.size()){
		ans.push_back(a);
		return;
	}

	for(int i=idx;i<a.size();++i){
		// if i==idx and a[i]==a[idx] that means that is the same element
		// but if i!=idx and a[i]==a[idx] that means we have repeated elements so we donot need them again in our permutations(so skip it).
		if(i!=idx and a[i]==a[idx]){
			continue;
		}
		swap(a[i],a[idx]);
		helper(a,ans,idx+1);
	}
}

vector<vector<int> > permute(vector<int> &a){

	sort(a.begin(),a.end());
	vector<vector<int> > ans;
	helper(a,ans,0);
	return ans;
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

	vector<vector<int> > res=permute(v);
	// printing vector of vector(all the permutations)
	for(auto v1 : res){
		for(auto v2 : v1){
			cout<<v2<<" ";
		}
		cout<<endl;
	}
	return 0;
}