#include<bits/stdc++.h>
using namespace std;

int unique(int arr[],int n){
	int xorsum=0;
	for(int i=0;i<n;++i){
		xorsum=xorsum^arr[i];
	}
	return xorsum;
}

int main(){
	// int arr[]={2,2,4,4,6,6,3};
	int arr[]={2,2,1,1,3,6,3};
	cout<<unique(arr,7)<<endl;
	return 0;
}