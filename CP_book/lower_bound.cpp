#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=9;
    int a[]={1,4,4,4,4,9,9,10,11};
    int X=12;
    int ind=lower_bound(a,a+n,X)-a;
    // if(ind!=n && a[ind]==X) cout<<ind;
    // else cout<<-1;
    cout<<ind;
    return 0;
}