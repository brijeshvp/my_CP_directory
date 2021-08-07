// program template
// #include<bits/stdc++.h>
// using namespace std;

// void swap(int &a, int &b){
// 	int temp =a;
// 	a=b;
// 	b=temp;
// }

// NOTE:- C++ has predined(inbuilt) function swap(). If we donot write swap() definition then also no error.
// Similarly max() and min() function are also predefined(in built) which returns max and min of 2 numbers.


// int main(){
// 	int a=3;
// 	int b=5;
// 	cout<<a<<" "<<b<<endl;
// 	swap(a,b);	//a is pass by reference and b is pass by value
// 	cout<<a<<" "<<b<<endl;
// 	cout<<max(a,b)<<endl;
// 	cout<<min(a,b)<<endl;
//     return 0;
// }


// string as a reference
// #include<bits/stdc++.h>
// using namespace std;

// void func(string &s){
// 	s="";
// }

// int main(){
// 	string s="asfsa";
// 	cout<<s<<endl;
// 	func(s);
// 	cout<<s<<endl;
//     return 0;
// }

// NOTE:All data structures are by default pass by value, if you do not write & in argument of function definition(except arrays)
// Arrays are never pass by values, they are always pass by reference(bcoz in func arg, a is the name of array which is const pointer).
#include<bits/stdc++.h>
using namespace std;

// 1D array as a argument without passing its size(of no use of array size in a function)
// void func(int a[]){
// 	a[0]=5; 
// }

// 1D array as a argument along with passing array size(n)
// void func(int a[], int n){

// }

// 2D array as a func argument
// void func(int a[][20]){
// 	a[0][0]=5; 
// }
// int main(){
// 	int a[10][20];
// 	a[0][0]=7;
// 	cout<<a[0][0]<<endl;
// 	func(a);
// 	cout<<a[0][0]<<endl;
//     return 0;
// }

// but how to pass user size 2D array as a function arg?
// this soln is wrong(will give error)
// void func(int n, int m,int a[][m]){
// 	a[0][0]=5; 
// }
// int main(){
// 	int n,m;
// 	cin>>n>>m;
// 	int a[n][m];
// 	a[0][0]=7;
// 	cout<<a[0][0]<<endl;
// 	func(n,m,a);
// 	cout<<a[0][0]<<endl;
//     return 0;
// }


// Ans:- you cannot pass user size array as func arg

// TakeAway:- avoid passing arrays as function arguments(specially 2D arrays).
// Soln:- if you want to use any type of array in a function, then donot declare that array in main func, declare that array globally.
// this is just a hack for competitive coding, although this is not optimal(but valid in competitive coding).

// lets say constraint(range) given in a problem is 1<N<10^5,then declare a array of size greater then that so that no error of test cases.
const int N=1e3+10;
int a[N][N];
// now no need to pass array and its size.
void func(){
	a[0][0]=5; 
}
int main(){
	a[0][0]=7;
	cout<<a[0][0]<<endl;
	func();
	cout<<a[0][0]<<endl;
    return 0;
}

// Always remember, when you need an array inside a function, declare it globally.