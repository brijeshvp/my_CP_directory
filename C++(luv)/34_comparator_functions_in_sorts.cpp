/*
Inputs:-
6
4 3
5 5
5 3
25 6
7 9
8 5
*/

#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(i=0;i<n;i++)
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define F first
#define S second


typedef pair<int, int> pii;
typedef vector<pii> vpii;

bool cmp(pii a,pii b){
  if(a.F!=b.F){
    return a.F<b.F;
  }
  return a.S>b.S;
}

void solve() {
  int i, j, n, m;
  si(n);
  vpii a(n);
  fo(i,n){
    si(a[i].F);
    si(a[i].S);
  }
  sort(a.begin(),a.end(),cmp);
  fo(i,n){
    cout<<a[i].F<<" "<<a[i].S<<endl;
  }
  cout<<endl;
}

int main() {
    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

