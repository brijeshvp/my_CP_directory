// https://www.hackerearth.com/problem/algorithm/gpl/
// program template
#include<bits/stdc++.h>
using namespace std;
// range of int <= 2^32 <= 10^9
// range of long long  <= 2^61(or greater) <= 10^18
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		// we are taking result and power_of_2 as long long bcoz value of n can be upto 60 which is binary string can be of length upto 60 thus power_of_2 can be of 2^60 for MSB and since power_of_2 for MSB is 2^60, result will be sum = 2^60 + 2^59 + .... which will be also greater than 2^60, which cannot be stored in int and long int thus we use long long int.
		long long result=0;
		long long power_of_2=1; //1=2^0 for LSB.
		for (int i = s.size()-1; i>=0; --i)
		{
			// logic for extracting digit as an integer from string
			int binary_dig= (s[i] - '0');
			result+= (binary_dig*power_of_2);
			power_of_2*=2;
		}
		cout<<result<<endl;
	}
    return 0;
}
