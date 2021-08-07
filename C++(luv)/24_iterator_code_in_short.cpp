#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v={2,3,5,6,7};
	for(int i=0;i<v.size();++i){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	vector<int> :: iterator it;
	for(it=v.begin();it!=v.end();++it){
		cout<<(*it)<<" ";
	}
	cout<<endl;

	// range based loops:-
	// directly iterate on container elements
	// works on all STL containers

	// Range based loops for vectors:- 
	// 1. range based loop with copy of element values of container
	for(int value : v){
		// value++;
		cout<<value<<" ";
	}
	cout<<endl;
	// value of elements in vector v gets copied directly in variable value.


	// 2. range based loops with references of element values of container
	for(int &value : v){
		cout<<value<<" ";
	}
	cout<<endl;

	// Range based loops for vector of pairs:-

	vector<pair<int,int> > v_p={{1,2},{2,3}};
	for(pair<int,int> &value : v_p){
		cout<<value.first<<" "<<value.second<<endl;
	} 

	// auto keyword(used a lot in iterators):-
	// it dynamically dtermines data type of a variable.
	auto a = 1;	//a is automatically determined as int bcoz of auto keyword.
	cout<<a<<endl;

	// if we use auto keyword with iterator(it) in for loop then we donot need to declare iterator it and it will automatically determine type of v as vector<int>.


	// auto keyword with range based loop:- vectors

	// vector<int> :: iterator it;	//no need to write this.
	for(auto it=v.begin();it!=v.end();++it){
		cout<<(*it)<<" ";
	}
	cout<<endl;

	// auto keyword with range based loop:- vector of pairs
	for(auto &value : v_p){
		cout<<value.first<<" "<<value.second<<endl;
	} 
    return 0;
}