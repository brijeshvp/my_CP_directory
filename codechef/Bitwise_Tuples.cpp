#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
// #define fo(i,n) for(i=0;i<n;i++)
// #define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define REP(i,a) FOR(i,0,(int)(a)-1)
#define FORd(i,a,b) for(int i=(a);i>=(b);i--)
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

const int mod = 1'000'000'007;
// const int N = 3e5, M = N;
//=======================
// const int mod = 1e9+7;
// vi g[N];
// int a[N];

ll power(ll x,ll m){
    if(m==0) return 1;
    if(m%2) return ((x%mod)*power((x%mod)*(x%mod),m/2)%mod);
    return power((x%mod)*(x%mod),m/2)%mod;

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int i, j, n, m;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        // ll x=((1<<n)-1)%mod;
        // ll ans=1;
        // FOR(i,0,m-1){
        //     ans=(ans*x)%mod;
        // }

        // binary exponentiation - iterative version
        // while(m){
        //     if(m&1) ans=(ans*x)%mod;
        //     x = (x*x)%mod;
        //     m>>=1;
        // }
        ll ans=power(2,n)-1;
        ans= power(ans,m);
        cout<<ans<<endl;
    }
    return 0;
}
