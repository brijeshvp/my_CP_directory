#include<bits/stdc++.h>
using namespace std;

bool getBit(int n,int pos){
	return ((n & (1<<pos))!=0);
}

void unique(int arr[],int n){
	// step 1:- find xorsum of all no
	int xorsum=0;
	for(int i=0;i<n;++i){
		xorsum=xorsum^arr[i];
	}

	// store xorsum in some variable bcoz we will need to find another unique number later
	int tempxor=xorsum;

	// step 2:- get position of rightmost bit which is set(1) in xorsum
	int pos=0;
	int setbit=0;
	while(setbit!=1){
		setbit = xorsum & 1;
		pos++;
		xorsum = xorsum >> 1;		
	}
	// we have to decrement the pos bcoz pos index in binary no starts with 0(from right side) and for the 1st bit index(position) will be 0 not 1.
	pos--;
	// step 3:- xor all the numbers in array which has bit set(1) at position pos -> we will get 1 unique no.
	int newxor=0;
	for(int i=0;i<n;++i){
		if(getBit(arr[i],pos)){
			newxor=newxor^arr[i];
		}
	}
	cout<<newxor<<endl;	//1st unique number
	cout<<(newxor^tempxor)<<endl;	//2nd unique number
}

int main(){
	int arr[]={1,1,2,2,3,3,5,7};
	unique(arr,8);
	return 0;
}