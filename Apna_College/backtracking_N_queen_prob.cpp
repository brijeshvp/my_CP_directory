#include<bits/stdc++.h>
using namespace std;

bool isSafe(int** arr,int x,int y,int n){
	// check whether queen is placed in that column(y), if yes backtrack(return false).
	// for all the rows we check whether at that yth column queen is placed or not.
	for(int row=0;row<x;++row){
		if(arr[row][y]==1){
			return false;	//backtrack
		}
	}

	//check whether queen is placed in that both diagonals(since there are 2 diagonals->as explained in image N queen prob apna college), if yes backtrack(return false).

	// 2 diagonals are:-
	// 1. left diagonal:-  row-1 and col-1
	// 2. right diagonal:- row-1 and col+1

	// checking for queen placed in left diagonal
	// start from xth row and yth col
	int row=x;
	int col=y;
	// run loop until 1st row and 1st col(row=col=0), since we are decreasing row and col at each check.
	while(row>=0 && col>=0){
		// if queen is placed at that row or col, backtrack(return false).
		if(arr[row][col]==1){
			return false;	//backtrack 
		}
		row--;
		col--;
	}

	// checking for queen placed in right diagonal
	// again start from xth row and yth col
	row=x;
	col=y;
	// run loop until 1st row and last(nth) col(row=0 and col=n-1),since we are decreasing row and increasing col at each check.
	while(row>=0 && col<n){
		// if queen is placed at that row or col, backtrack(return false).
		if(arr[row][col]==1){
			return false;	//backtrack 
		}
		row--;
		col++;
	}
	// if queen is not placed in all of above locations(in upper col, or in both left and right diagonals than return true-> don't backtrack and proceed further)
	return true;
}

// here no need of y(column) bcoz when we are placing our queen in any row,we donot check for further columns in that row and we check for next queen in next row.

// we will not create a seperate solArr, we will store solution in the same array(arr).
bool nQueen(int** arr,int x,int n){
	// base condition(we place all our N queen properly and moved out of all rows), in that case return true(our solution).
	if(x>=n){
		return true;
	}

	// for each column, we need to check if it is safe to place a queen, if yes mark 1 at that position in the same array.
	for(int col=0;col<n;++col){
		if(isSafe(arr,x,col,n)){
			arr[x][col]=1;
			// for the same queen placed in that col, check whether we can place other queen in next row, if yes return true and proceed further otherwise backtrack and again mark this position as 0.
			if(nQueen(arr,x+1,n)){
				return true;
			}

			arr[x][col]=0;	//backtrack
		}
	}
	// we will return false only when we have checked for all the columns in the same row we are not able to place the queen -> in that case backtrack and try next position of queen in previous row.
	return false;
}

int main(){
	int n;
	cin>>n;
	// defining 2D array dynamically
	int **arr=new int *[n];
	for(int i=0;i<n;++i){
		arr[i]=new int[n];
		// initialize the array with 0.
		for(int j=0;j<n;++j){
			arr[i][j]=0;
		}
	}

	// if nQueen returns true, print the solution.
	if(nQueen(arr,0,n)){
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}