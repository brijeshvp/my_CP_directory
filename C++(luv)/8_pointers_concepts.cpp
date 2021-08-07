// program template
#include<bits/stdc++.h>
using namespace std;

// bit=smallest unit of memory
// 1 byte=8 bit
// each byte in memory has an address(hexadecimal address)
int main(){
	int x=4;
	// '*' means value at(indirection operator)
	int *p_x = &x;
	// '&' means address of(addr of operator)
	cout<<"Addr x: "<<&x<<endl;
	cout<<"Val p_x: "<<p_x<<endl;
	cout<<"Val *p_x: "<<*p_x<<endl;
	*p_x=5;
	cout<<"p_x+1: "<<p_x+1<<endl;
	int **pp_x=&p_x;
	cout<<"Addr p_x: "<<&p_x<<endl;
	cout<<"Val pp_x: "<<pp_x<<endl;
	cout<<"Val *pp_x: " <<*pp_x<<endl;
	cout<<"Val **pp_x: " <<**pp_x<<endl;
	**pp_x=7;
	cout<<"x: "<<x<<endl;
	cout<<endl<<endl;


	// Array-Pointer concepts
	int a[10];
	a[0]=2;
	a[1]=4;
	// a = &a[0] = a+0
	cout<<"a: "<<a<<endl;
	cout<<"&a[0]: "<<&a[0]<<endl;
	cout<<"*a: "<<*a<<endl;
	cout<<"a+1: "<<a+1<<endl;
	// a[1] = *(a+1)
	cout<<"&a[1]: "<<&a[1]<<endl;
	cout<<"*(a+1): "<<*(a+1)<<endl;
    return 0;
}
