#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];

void solve() {
  int i, j, n, m;
  si(n);
  vi v(n);
  fo(i,n){
    si(v[i]);
  }
  // NOTE:- all these functions takes 1st arg=1st addr,2nd arg as last addr+1 = v.end(), in array it is a+n.

  // returns addr(ptr) to min elt
  int min = *min_element(v.begin(),v.end());
  cout<<min<<endl;
  // returns addr(ptr) to max elt
  int max = *max_element(v.begin(),v.end());
  cout<<max<<endl;
  // returns actual sum(not addr) to max elt
  // 3rd arg=0 which is initial sum
  int sum = accumulate(v.begin(),v.end(),0);
  cout<<sum<<endl;
  // returns count(not addr)-> #times an elt occurs
  int ct = count(v.begin(),v.end(),6);
  cout<<ct<<endl;
  // returns addr(ptr in case of array, iterator in case of STL container) at position where elt is found(if elt not found returns iterator to last elt+1(next to last elt))
  auto it = find(v.begin(),v.end(),10);
  if(it != v.end())
    cout<<(*it)<<endl;
  else
    cout<<"Element not found"<<endl;
  // reverses actual(same) string(doesnot create a seperate copy)
  string s = "abcdsfdsjf";
  reverse(s.begin(),s.end());
  cout<<s<<endl;

  // lambda functions(temporary functions)
  auto sum1 = [](int x,int y){return x+y;};
  cout<<sum1(2,3)<<endl;

  vi v2={-2,-4,-5};
  // all the below functions returns either true or false depending on lambda function condition

  // returns true if all elts satisfies the condition(similar to AND logic)
  cout<<all_of(all(v2), [](int x){return x>0;})<<endl;
  // returns true if any one of the elts satisfies the condition(similar to OR logic)
  cout<<any_of(all(v2), [](int x){return x>0;})<<endl;
  // returns true if none of the elts satisfies the condition(similar to NOT logic)
  cout<<none_of(all(v2),[](int x){return x>0;})<<endl;
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

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m){
	int i, u, v;
	while(m--){
		cin>>u>>v;
    u--, v--;
		g[u].pb(v);
		g[v].pb(u);
	}
}

void dfs(int u, int par){
	for(int v:g[u]){
		if (v == par) continue;
		dfs(v, u);
	}
}


