#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    int A[T],B[T],C[T];
    for(int i=0;i<=T-1;i++){
        cin>>A[i]>>B[i];
        C[i]=A[i]+B[i];
    }
    for(int i=0;i<=T-1;i++){
        cout<<C[i]<<endl;
    }

    return 0;
}
