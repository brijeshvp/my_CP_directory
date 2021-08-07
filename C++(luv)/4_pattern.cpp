// program template
#include<bits/stdc++.h>
using namespace std;
/*Pattern:-
		*
		* *
		* * *
		* * * *

	*/
int main(){
	//test cases
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		//loop for number of lines of pattern to be printed
		for (int i = 1; i <= n; ++i)
		{
			// loop for line number(printing number of stars in a given line=that line number)
			for (int j = 1; j <= i; ++j){
				cout<<"*";
			}
			cout<<endl;
		}
	}
    return 0;
}
