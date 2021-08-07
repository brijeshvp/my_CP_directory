#include<bits/stdc++.h>
using namespace std;
int v[2];
int* findTwoElement(int *arr, int n) {
        // code here
        unordered_map<int,bool> numberMap;
        for(int value=0;value<n;++value){
            if(numberMap.find(arr[value])==numberMap.end() ){
                numberMap[arr[value]]==true;
            }
            else{
                v[0]=arr[value];
            }
        }
        
        for(int i=1;i<=n;++i){
            if(numberMap.find(i)==numberMap.end()){
                v[1]=i;
            }
        }
        return v;
    }

int main(){
    int arr[]={1,1,2,3,4,6};
    int *p = findTwoElement(arr , 6);
    for(int i=0;i<2;++i){
        cout<<*(p+i)<<" ";
    }

    return 0;
}