#include<bits/stdc++.h>
using namespace std;

bool getBit(int n,int pos){
	return ((n & (1<<pos))!=0);
}

int setBit(int n,int pos){
	return (n | (1<<pos));
}

int unique(int arr[],int n){
	int result=0;
	// step 1:- since size of int is 64 bit, any number will have 64 bits. So we loop through each bit
	for(int i=0;i<64;++i){
		int sum=0;
		// for each bit individually,check for ith bit for each element of array, if it is set, do sum+1.
		for(int j=0;j<n;++j){
			if(getBit(arr[j],i)){
				sum++;
			}
		}
		// all bits will have count/sum divisible by 3 except the bit/index where unique number's bit is set, so for that set that bit in result.
		// eg1. for 4=100 at index 2 -> so we need to set only 2nd bit in result.
		// eg2. for 9=1001 at index 0 and 3 -> so we need to set only that bits in result. 
		if(sum%3!=0){
				result=setBit(result,i);
			}
	}
	return result;
}

int main(){
	// int arr[]={1,1,1,2,2,2,3,3,3,4};
	int arr[]={9,2,2,2,3,3,3,4,4,4};
	cout<<unique(arr,10)<<endl;
	return 0;
}