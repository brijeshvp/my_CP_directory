#include<bits/stdc++.h>
using namespace std;

// x denotes row, y denotes column, n is the size of 2D array.
// isSafe() returns whether it is safe to go at particular box
bool isSafe(int** arr,int x,int y,int n){
	if(x<n && y<n && arr[x][y]==1){
		return true;
	}
	return false;
}

// ratinMaze() returns our solArr(path rat needs to take to reach goal box(rightmost down box))
bool ratinMaze(int** arr,int x,int y,int n,int** solArr){
	// base condition(if rat reached last rightmost down box return true to get its path(solArr))
	if(x==n-1 && y==n-1){
		solArr[x][y]=1;
		return true;
	}

	// if it is safe to go at that box, mark 1 in solArr and either move right or down by 1 step 
	if(isSafe(arr,x,y,n)){
		solArr[x][y]=1;
		// move down 1 step(increase row by 1)
		if(ratinMaze(arr,x+1,y,n,solArr)){
			return true;
		}
		// move right 1 step(increase column by 1)
		if(ratinMaze(arr,x,y+1,n,solArr)){
			return true;
		}
		// after moving right or down, if not safe at that box, mark 0 at that box in solArr and backtrack(return false)
		solArr[x][y]=0;	//backtrack
		return false;	//backtrack
	}

	// if it is not safe at that box than also backtrack(return false)
	return false;
}

int main(){
	int n;
	cin>>n;
	// defining 2D array dynamically
	int **arr=new int*[n];
	int **solArr=new int*[n];
	for(int i=0;i<n;++i){
		arr[i]=new int[n];
		solArr[i]=new int[n];
	}
	// fill 2D array with user values
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>arr[i][j];
			solArr[i][j]=0;	//initialize solArr with 0(so as to store correct solution)
		}
	}

	// if ratinMaze() gives solution than print it.
	if(ratinMaze(arr,0,0,n,solArr)){
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cout<<solArr[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}

// Input matrix(as shown in image in rat in Maze apna college):
// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1