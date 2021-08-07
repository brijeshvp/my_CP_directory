#include<bits/stdc++.h>
using namespace std;

// pair(in STL):- it is used to maintain relationship.
int main(){
	// NOTE:- we can pass data type or also any STL container as an argument in pair.
	pair<int,string> p;

	// we can either use make_pair() function or pass values in set notation.
	// p = make_pair(2,"abc");
	p = {2,"abcd"};
	// here is 2 is p.first and "abcd" is p.second.

	// passing pair as a reference to another pair.
	pair<int,string> &p1 = p;
	p1.first = 3;
	cout<<p.first<<" "<<p.second<<endl;

	int a[]={1,2,3};
	int b[]={2,3,4};

	// declaring array of pair(int,int) to store relation between 2 integers.
	pair<int,int> p_array[3];
	// here logic is, we store 0th element of both array(a & b) in p_array[0], 1st element of both array(a & b) in p_array[1] and 2nd element of both array(a & b) in p_array[2] so that we can maintain relation between elements of both array. 
	p_array[0]={1,2};
	p_array[1]={2,3};
	p_array[2]={3,4};
	// now, when below line is executed, in both arrays, 1st and last element is swapped simultaneously.
	swap(p_array[0],p_array[2]);
	
	for(int i=0;i<3;++i){
		cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	}
    return 0;
}