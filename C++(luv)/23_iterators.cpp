#include<bits/stdc++.h>
using namespace std;

// we can access ith element in vectors using v[i] same as that of arrays(bcoz both arrays and vectors elements are stored in continous memory locations. But in rest and most of the STL containers like set,maps, etc. we cannot access its ith element(since their elements are not stored in continous memory locations). So we need iterators to loop through and access their elements.

// ITERATORS(definition):- pointer like structures.
// It points to the element of containers.
// Iterators are always continous irrespective of whether container is continous or not.

// int main(){
// 	vector<int> v={2,3,5,6,7};
// 	// traversing vector using v[i].
// 	for(int i=0;i<v.size();++i){
// 		cout<<v[i]<<" ";
// 	}
// 	cout<<endl;
// 	// first we write container to which iterator will point to. then ::(scope resolution) and iterator it.
// 	vector<int> :: iterator it = v.begin();
// 	// v.begin() points to 1st element of container and v.end() points to (last + 1)th element of container.
// 	// v is the name of container(here it is vector v).
// 	cout<<(*(it+1))<<endl;


// 	// traversing vector using iterator.
// 	for(it=v.begin();it!=v.end();++it){
// 		cout<<(*it)<<" ";
// 	}
//     return 0;
// }

// Difference between it++ and it=it+1:-

// it++ moves to next iterator
// it+1 moves to next location

// in vectors, there is no difference between it++ and it+1 bcoz next iterator is at next location only in vectors since they are continous(like arrays)

// in maps,sets like containers they are not continous so it+1(moving to next location) will become invalid operation->compilation error.

// So, we generally use it++ and not it+1.


// how to access vector of pairs using iterator.
int main(){
	vector<int> v={2,3,5,6,7};
	for(int i=0;i<v.size();++i){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	vector<pair<int,int> > v_p={{1,2},{2,3},{3,4}};
	vector<pair<int,int> > :: iterator it;
	// Option 1:-
	for(it=v_p.begin();it!=v_p.end();++it){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	cout<<endl;
	// Option 2:-
	for(it=v_p.begin();it!=v_p.end();++it){
		cout<<it->first<<" "<<it->second<<endl;
	}

	// (*it).first <=> (it->first)
	// both are same and used iterchangabally(most preferable arrow notation).
	return 0;
}