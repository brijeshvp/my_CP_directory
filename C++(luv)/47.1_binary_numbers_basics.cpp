#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int main(){
    // every odd number has 1 as 0th bit(LSB) in binary and every even number has 0 as the 0th bit(LSB) in binary.

    // 2^n in c++ = (1<<n)

    // using n bits, i can store numbers from 0 to 2^n-1
    // now int data type is of 32bits, so it can store 2^32-1 max number, lets check it.
    // first lets check what is the maximum value of integer maximum

    cout<<INT_MAX<<endl; 

    // now lets check if this INT_MAX = 2^32-1

    // int a=(1<<32)-1;    //(1<<32) is 2^32.
    // cout<<a<<endl;

    // it gives warning: left shift count >= width of type
    // it means that, may be you can store 2^32-1 in int but 1<<32 means 1 is integer and you are left shifting int 32 times so it becomes long int. and you cannot perform this much long operation on int.
    // Solution:- make 1 as long long instead of int

    // int a = (1LL<<32)-1;
    // cout<<a<<endl;

    // but this also gives over flow, why it is not able to store this number? 
    // Hack:- if we do 1LL<<31 instead of 1LL<<32

    int a= (1LL<<31)-1;
    cout<<a<<endl;

    // now it is giving same output as INT_MAX, but it means we are storing only 31 bits right?
    // Yes.
    // bcoz any int is by default signed int type. -> MSB is for storing sign of the number.
    // MSB = 1 -> number represented by next 31 bits is a negative number
    // MSB = 0 -> number represented by next 31 bits is a positive number

    // lets print unsigned int for 32 bits
    unsigned int b=(1LL<<32)-1;
    cout<<b<<endl;
    // this will give double the output as of int.
    // bcoz MSB is not used for sign so you can use that bit to store the numnber and you cannot store negative numbers in unsigned int.


    // Range of unsigned int for n bits: 0 to (2^n)-1
    // e.g. 32 bits unsigned: 0 to 2^32-1
    // Range of signed int for n bits: -2^(n-1) to 2^(n-1)-1 
    // e.g. 32 bit signed: -2^31 to (2^31)-1
    return 0;
}