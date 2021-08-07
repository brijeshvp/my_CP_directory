// program template
// #include<bits/stdc++.h>
// using namespace std;
// segmentation fault:- trying to access the memory which has never been created(allocated)
// int main(){
	// int a[10];
	// a[11]=10;
	// cout<<a[11];	//undefined behaviour->may work in some machine(but its a segmentation error)

	// int n;
	// cin >> n;
	// // creating the array of user's size
	// int a[n];
	// // filling the array
	// for (int i = 0; i < n; ++i)
	// {
	// 	cin>>a[i];
	// }
	// // summing all elements
	// int sum=0;
	// for (int i = 0; i < n; ++i)
	// {
	// 	sum+=a[i];
	// }
	// cout<<sum;

	// strings in C(character array):-
	// char a1[],a2[];
	// Advantages of C++ strings:-In C++ string, we can get the size of the string using str.size(), we can add(concatenate) string in C++ strings but in C strings(char array),we can't do a1+a2(can't add char array).

	// int n,m;
	// cin>>n>>m;
	// int a[n][m];
	// // filling 2D array.
	// // we always take input of 2D array row wise(1st take input of 1 complete row then next row and so on(since 1st loop is for rows)).
	// // loop for rows(always 1st loop)
	// for (int i = 0; i < n; ++i)
	// 	{
	// 		// loop for columns(always 2nd loop)
	// 		for (int j = 0; j < m; ++j)
	// 		{
	// 			cin>>a[i][j];
	// 		}
	// 	}

	// 	// displaying the 2D array
	// 	for (int i = 0; i < n; ++i)
	// 	{
	// 		// loop for columns(always 2nd loop)
	// 		for (int j = 0; j < m; ++j)
	// 		{
	// 			cout<<a[i][j]<<" ";
	// 		}
	// 		cout<<endl;
	// 	}	

	// Very important for Competitive Coding:-
// Array size limits(online platforms)
// locally declaring arrays(inside a function or main):- O(10^5) e.g. 10^5,2*10^5,99*10^5,....

	// int n=1e7;
	// int a[n];
	// a[n-1]=7;
	// cout<<a[n-1];	//this will give segmentation error(since array size cannot be greater than 10^5.)	
    // return 0;
// }

// globally declaring arrays(inside a function or main):- O(10^7) e.g.10^7, 2*10^7,99*10^7,.....
#include<bits/stdc++.h>
using namespace std;
// whenever declaring global array, size of array variable must be constant as below(mandatory):-
// const int n=1e7;
const int n=2e7;
int a[n];
int main(){
	a[n-1]=7;
	// no error
	cout<<a[n-1];
    return 0;
}
