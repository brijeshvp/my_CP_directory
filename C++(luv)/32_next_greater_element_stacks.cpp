/*
Inputs:
6
4 5 2 25 7 8
*/

#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)

typedef stack<int> sti; 
typedef vector<int>	vi;


vi NGE(vi v){ 
	sti st;	//we will insert indices in stack rather than values just to make code simpler
	vi nge(v.size());	//here also, we will store indices
	fo(i,v.size()){
		// we will only assign next greater element if that element is greater than previous element(v[i]>v[st.top()])
		while(!st.empty() && v[i] > v[st.top()] ){
			nge[st.top()]=i;	//storing only indices of next greater elements
			st.pop();
		}
		st.push(i);	//pushing only indices in stack
	}
	while(!st.empty()){
		nge[st.top()]=-1;
		st.pop();
	}
	return nge;
}

void solve() {
  int i, j, n, m;
  si(n);
  vi v(n);
  fo(i,n){
  	si(v[i]);
  }
  vi nge = NGE(v);
  fo(i,n){
  	cout<<v[i]<<" "<<(nge[i]==-1 ? -1 : v[nge[i]])<<endl;
  }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}