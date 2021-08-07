#include<bits/stdc++.h>
using namespace std;

// refer image logic in the same folder with same name

vector<vector<int> > getSubsets(vector<int> num){
	int size=num.size();
	int subsetNum= (1<<size);
	vector<vector<int> > allSubsets;
	for(int i=0;i<subsetNum;++i){
		vector<int> subset;
		for(int j=0;j<size;++j){
			if((i & (1<<j))!=0){
				subset.push_back(num[j]);
			}
		}
		allSubsets.push_back(subset);
	}
	return allSubsets;
}

int main(){
	vector<int> v={1,2,3};
	vector<vector<int> > result = getSubsets(v); 	
	for(auto &value1 : result){
		for(auto &value2 : value1){
			cout<<value2<<" ";
		}
		cout<<endl;
	}
	return 0;
}