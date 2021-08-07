#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>> N;
    int arr[N];
    for(int i=0;i<=N-1;i++){
        cin>>arr[i];
    }
    for(int j=N-1;j>=0;j--){
        cout<<arr[j]<<" ";
    }
    return 0;
}