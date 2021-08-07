#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> allPerms;

void generatePerms(vector<int> &nums){
	vector<int> currentPermutation;
	for(int i=0;i<nums.size();++i){
		currentPermutation.push_back(nums[i]);
	}
	do{
		allPerms.push_back(currentPermutation);
	}while(next_permutation(currentPermutation.begin(),currentPermutation.end()));
}

int main(){
	vector<int> nums={1,2,3};
	generatePerms(nums);
	for(auto it1 : allPerms){
		for(auto it2 : it1){
			cout<<it2<<" ";
		}
		cout<<endl;
	}
}