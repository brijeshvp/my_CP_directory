#include<bits/stdc++.h>
using namespace std;

// function to print vector.
// NOTE:- in array, we need to pass the size of array(n) as argument to the function to access its last element, but here in vectors we have in built function vector.size() to get the size of vector in O(1).


// printVec() which takes copy of vector as argument(which is O(n) time operation).

// void printVec(vector<int> v){
// 	cout<<"size: "<<v.size()<<endl;
// 	for(int i=0;i<v.size();++i){
// 		// v.size() -> O(1)
// 		cout<<v[i]<<" ";
// 	}
// 	cout<<endl;
// }

// printVec which takes reference to the vector(make changes in same vector)
void printVec(vector<int> &v){
	cout<<"size: "<<v.size()<<endl;
	for(int i=0;i<v.size();++i){
		// v.size() -> O(1)
		cout<<v[i]<<" ";
	}
	v.push_back(2);
	cout<<endl;
}

// vectors:- arrays with dynamic size
int main(){
	// int a[10];	//array of type int with #elements=10.

	// we can pass any data type or any STL container as an argument in below line(basically we can create a vector of any data type or any STL container).
	vector<int> v;	//vector of type int with #elements=0(initially empty).Size varies dynamically.

	// vector<int> v(5);	//declares a vector of size 5 with all 5 elements initialized to 0.(here also, we can increase the vector size dynamically).

	// vector<int> v(5,3);	//declares a vector of size 5 with all 5 elements initialized to specified value in 2nd argument which is 3 in our case.(here also, we can increase the vector size dynamically).

	// in arrays, once declared cannnot change size of it(#elements in it)
	// in vectors, we can change the size dynamically(even after declared).


	// int n;
	// cin>>n;

	// for(int i=0;i<n;++i){
	// 	int x;
	// 	cin>>x;
	// 	// push_back() function inserts element at the end in the vector.
	// 	v.push_back(x);	//push_back -> O(1).
	// 	printVec(v);
	// }
	// printVec(v);

	v.push_back(7);
	v.push_back(6);
	
	// v.pop_back();	// pop_back() function deletes the element from the end in the vector.
	//pop_back -> O(1)
	// printVec(v);


	// we can copy one vector into another as is(below line will create another vector v2 and copy data of vector v in v2).
	// NOTE:- in array, by doing same thing, we cannot create a copy of array but a pointer(reference) to that array.
	// int a[];
	// int b=a;
	// a and b points to same arrays.
	vector<int> v2 = v;	//creating a copy of vector takes O(n)->similar to that for loop process of copying one array to the array.
	// So, copying a vector is an expensive operation.
	// Solution:- creating reference
	v2.push_back(5);
	printVec(v);
	printVec(v);
	printVec(v2);

	// v2 and v both points to the same vector(v2 is the reference to v).
	// vector<int> &v2 = v;
	// v2.push_back(5);
	// printVec(v);
	// printVec(v);
	// printVec(v2);

    return 0;
}


// NOTE:- we have seen that for competitive coding, locally(inside any function) declaring an array, size limit 10^5 and globally declaring the array, size limit 10^7.
// Same limits of array, applies on vectors also.