// we can estimate execution time of our code roughly which is called time complexity analysis.
// NOTE:- we cannot exactly measure execution time of our code

// any single statement in a code is called 1 iteration.

int main(){
	int x;
	int sum=0;
	sum=x+x;
	int n;
	cin>>n;
	//--------O(5)
	for(int i=0;i<n;++i){
		// loop of size n
		int y;
		y=5;
		y++;
		 //---- O(3) 
	}
	// ------- O(3*n)
}

// Total time complexity:- O(5) + O(3*n) 
// if n<10^5 then we can neglect O(5) and also O(3*n) ~ O(n)
// thus overall time complexity:- O(n)

// NOTE:- O(3), O(15)->any constant time operations,we can write it as ~ O(1)

// Number of iterations in 1 sec(on online coding websites):- 10^7-10^8(assume it as 10^7).
// thus will estimating, number of iterations must be less than 10^7.

// 10^7  -> 1 sec
// 10^8  -> 10 sec
// 10^9  -> 100 sec
// 10^10 -> 1000 sec~15 min
