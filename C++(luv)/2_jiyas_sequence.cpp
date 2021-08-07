// https://www.hackerearth.com/problem/algorithm/jiyas-sequence/
// program template
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	// loop for test cases
	while(t--){
		int n;
		cin>>n;
		// variable to store product.
		// we are using long long type variable bcoz of the constraints given. If n is 15->15 integers in a sequence and eachy integer can take max value=10. so product will be 10^15 which cannot be stored in int or long int.
		long long product=1;
		// loop for storing product
		for (int i = 0; i < n; ++i){
			int a;
			cin>>a;
			product*=a;
		}
		int least_dig=(product%10);
		if (least_dig==2 || least_dig==3 || least_dig==5)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
    return 0;
}
