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
typedef set<int>      seti;
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

int solve() {
  int i, j, n, m;

  // for arrays:-
  si(n);
  int a[n];
  fo(i,n){
    si(a[i]);
  }
  sort(a,a+n);
  fo(i,n){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  int *ptr = lower_bound(a,a+n,6);
  if(ptr == (a+n)){
    cout<<"Not Found";
    return 0;
  }
  cout<<(*ptr)<<endl;


  ptr = upper_bound(a,a+n,5);
  if(ptr == (a+n)){
    cout<<"Not Found";
    return 0;
  }
  cout<<(*ptr)<<endl;
  

  // for vectors:-
  si(n);
  vi v(n);
  fo(i,n){
    si(v[i]);
  }
  sortall(v);
  fo(i,n){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  auto it = lower_bound(all(v),6);
  if(it == v.end()){
    cout<<"Not Found";
    return 0;
  }
  cout<<(*it)<<endl;

  it = upper_bound(all(v),26);
  if(it == v.end()){
    cout<<"Not Found";
    return 0;
  }
  cout<<(*it)<<endl;


  // si(n);
  // seti s;
  // fo(i,n){
  //   int x;
  //   si(x);
  //   s.insert(x);
  // }
  // // no need to sort set(already sorted).
  // fo(i,n){
  //   auto it=s.lower_bound(6);
  // }
  // cout<<(*it)<<endl;
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
