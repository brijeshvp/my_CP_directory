#include<bits/stdc++.h>
using namespace std;

vector<int> ans;
void calculateSum(int* arr,int n){
	for(int i=0;i<(1<<n);++i){
		int sum=0;
		for(int j=0;j<n;++j){
			if((i & (1<<j))!=0){
				sum+=arr[j];
			}
		}
		cout<<sum<<endl;
	}
}

int main(){
	int arr[]={1,2,3};
	int n=3;
	calculateSum(arr,n);
	// for(auto v1 : ans){
	// 	for(auto v2 : v1){
	// 		cout<<v2<<" ";
	// 	}
	// 	cout<<endl;
	// }
	return 0;
}