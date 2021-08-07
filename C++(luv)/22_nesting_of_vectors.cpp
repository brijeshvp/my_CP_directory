#include<bits/stdc++.h>
using namespace std;


// printVec which takes reference to the vector(make changes in same vector)
void printVec(vector<pair<int,int> > &v){
	cout<<"size: "<<v.size()<<endl;
	for(int i=0;i<v.size();++i){
		// v.size() -> O(1)

		// now v[i] is the ith element of vector, and each element of vector is a pair so v[i] has 2 element(its a pair)
		// cout<<v[i]<<" ";

		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	cout<<endl;
}

int main(){
	// in last video of pairs.cpp, we have declared array of pairs(to maintain relationship between 2 element->form a pair). but generally we donot do that, instead we declare vector of pairs.
	// we have seen that we can pass any data type or any STL container as an argument(we can create vector for that).

	// vector of pair(directly intialized while declare).
	// vector<pair<int,int> > v={{1,2},{2,3},{4,5}};
	// here each vector element is a pair(2 values). e.g. v[0],v[1], all has 2 values.

	vector<pair<int,int> > v;
	printVec(v);
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
		// or
		// v.push_back(make_pair(x,y));
	}
	printVec(v);
    return 0;
} 