// https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question/
// program template
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	// we want cth number in a set which is multiple of a or b or both(so we made a loop from 1, if no is divisible by any of a or b then thats the cth number and each time we decrement value of c bcoz we want to find the cth number in that set, so we will stop when c value becomes 0->we found cth number in the set.)
	int cth_num;
	for (int i=1;c>0; ++i){
		if(i%a==0 || i%b==0){
			c--;
			cth_num=i;
		}
	}
	// cout<<cth_num;

	// now, if a cth number is divisible by both a and b then we want step size to be lcm of both a and b so we made a loop from i upto a*b->bcoz from 1 to multiplication of 2 no, we get atleast one number which is divisible by both, and when we find 1st such no we stop that means we get the lcm of both the numbers.
	int lcm;
	for(int i=1;i<=a*b;i++){
		if(i%a==0 && i%b==0){
			lcm=i;
			break;
		}
	}
	// cout<<lcm;

	// now if a cth number is divisible by both a and b then step size is lcm of both else step size is that number which divides cth number.
	int step_size;
	if(cth_num%a==0 && cth_num%b==0){
		step_size=lcm;
	}else if(cth_num%a==0){
		step_size=a;
	}else{
		step_size=b;
	}

	// now we made a loop to find all numbers at the gap of step size from cth number upto 0.
	for(int i=cth_num;i>=0;i=i-step_size){
		cout<<i<<" ";
	}
    return 0;
}