#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i=10;i>=0;--i){
		cout<<((num>>i)&1);
	}
	cout<<endl;
}
int main(){
	// printBinary(12);
	// int a= ~(12-1);
	// printBinary(a);
	// int b=a & 12;
	// printBinary(b);
	int num=12;
	printBinary(num);
	printBinary(~(num-1));
	printBinary(num & ~(num-1));
}