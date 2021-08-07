#include<bits/stdc++.h>
using namespace std;

int getBit(int n,int pos){
	return ((n & (1<<pos))!=0);
}

int setBit(int n,int pos){
	return (n | (1<<pos));
}

int clearBit(int n,int pos){
	int mask = ~(1<<pos);
	return (n & mask);
}

int updateBit(int n,int pos,int value){
	int mask=~(1<<pos);
	n = n & mask;
	// if value=0 -> 0 << pos = 0 (always) -> n | 0 = n (itself) and since we have cleared (pos)th bit in n just above, we have set 0 at (pos)th bit.
	// if value=1 -> 1 << pos = 1 set at (pos)th bit -> n | (1<<pos) = 1 set at (pos)th bit.
	return (n | (value<<pos));
}

int main(){
	// cout<<getBit(5,2)<<endl;
	// cout<<setBit(5,1)<<endl;
	// cout<<clearBit(5,2)<<endl;
	cout<<updateBit(5,1,1)<<endl;
	return 0;
}