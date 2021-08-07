#include<bits/stdc++.h>
using namespace std;

// printVec which takes reference to the vector(make changes in same vector)

// recieving vector as input
void printVec(vector<int> &v){
	cout<<"size: "<<v.size()<<endl;
	for(int i=0;i<v.size();++i){
		// v.size() -> O(1)

		// now v[i] is itself a vector, and each element of vector is v[i][j].

		// printing ith vector v[i].
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

// ROWS:- #of vectors
// COLUMNS:- total #elements in each vector(size of each vector).

// 1. 2D array:-
// both rows and columns are constant size(cannot change the size of rows and columns)


// 2. array of vectors:-
// number of rows is fixed and number of columns can vary dynamically(that is we cannot change/increase #vectors(#rows) after taken input from user=N).


// inputs:-
/*
3
3
1 2 3
3
3 4 5
2
1 2
*/

// int main(){
// 	// taking N vectors as input
// 	int N;
// 	cin>>N;
// 	// array of vectors
// 	vector<int> v[N];
// 	// each element of array is itself a vector. e.g. v[0],v[1],v[2] each of them itself a vector.

// 	// taking N vectors along with size as input
// 	for(int i=0;i<N;++i){
// 		int n;
// 		cin>>n;
// 		// taking elements of particular vector as input.
// 		for(int j=0;j<n;++j){
// 			int x;
// 			cin>>x;
// 			// each v[i] is a vector here.
// 			v[i].push_back(x);
// 		}
// 	}
// 	for(int i=0;i<N;++i){
// 		// each v[i] is a vector,so we are passing vector to printVec.
// 		printVec(v[i]);
// 	}
// 	// printing 0th vector,0th element
// 	cout<<v[0][0];
// 	// printing 0th vector, 1st element
// 	cout<<v[0][1];
//     return 0;
// }


// 3. vector of vectors:-
// both number of rows and columns can vary dynamically(that is we can change/increase value of N taken from user at any time).

int main(){
	int N;
	cin>>N;
	// vector of vectors
	vector<vector<int> > v;
	// every element of vector is also a vector(same as array of vectors).e.g. v[0],v[1],v[2] each of them itself a vector. But here since vector is used instead of array, we can also make #rows dynamic(that is we can also change #vectors at any time)
	for(int i=0;i<N;++i){
		int n;
		cin>>n;
		// now here we cannot do below loop bcoz in previous case we have declared array of size 10, so we can access ith element of it, but here vector is initially of size 0 so ith element doesn't exist yet.

		// for(int j=0;j<n;++j){
		// 	int x;
		// 	cin>>x;
		// 	v[i].push_back(x);
		// }



		// Solution 1(best solution):- declaring a temp vector to store 1 vector input from user and then pushing that vector as an element in v vector.

	// 	vector<int> temp;
	// 	for(int j=0;j<n;++j){
	// 		int x;
	// 		cin>>x;
	// 		temp.push_back(x);
	// 	}
	// 	v.push_back(temp);
	// }

	// Solution 2:- everytime first we push an empty vector to vector of vector v. now ith vector exist in v, so now we can access v[i] to push_back values. 

		v.push_back(vector<int> ());
		for(int j=0;j<n;++j){
			int x;
			cin>>x;
			v[i].push_back(x);
		}
	}


	v[0].push_back(10);	//pushing 10 value at last in the 1st vector
	v.push_back(vector<int> ());	//pushing an empty vector at last of vector of vector v.
	for(int i=0;i<v.size();++i){
		printVec(v[i]);
	}
	cout<<v[0][1];
	return 0;
}