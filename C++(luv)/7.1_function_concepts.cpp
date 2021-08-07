// sum of multiple digits using functions
#include<bits/stdc++.h>
using namespace std;

int digit_sum(int n){
	int digit_sum=0;
	while(n>0){
		digit_sum=digit_sum+(n%10);
		n/=10;
	}
	return digit_sum;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<< digit_sum(a) + digit_sum(b);
    return 0; //this return is optional
    // main returns to OS(Compiler)
    // return 0 means program executed successfully
    // after return 0; no line will be executed
}
