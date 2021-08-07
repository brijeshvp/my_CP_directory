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

// vi g[N];
// int a[N];

// always define hash arrays globally
const int N=2e5+10;
int hsh[N];

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int i, j, n, m;
    cin>>n;
    // approach 1:- Hashing -> correct approach -> hashing is cheaper than sum of n numbers (when n is lasrge like n=10^5).
    FOR(i,0,n-2){
        int x;
        cin>>x;
        hsh[x]=1;
    }
    FOR(i,1,n){
        if(!hsh[i])
            cout<<i<<"\n";
    }

    // // approach 2:- Wrong answer -> bcoz n = 10^5 and sum of n numbers can't be stored in long long. So use hashing.
    // ll sumOfn=n*(n+1)/2;
    // ll ans=0;
    // FOR(i,0,n-2){
    //     int x;
    //     cin>>x;
    //     ans+=x;
    // }
    // cout<<(sumOfn-ans)<<"\n";
    return 0;
    }
