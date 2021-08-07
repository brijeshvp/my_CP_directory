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
const int N = 3e5, M = N;
//=======================

// vi g[N];
// int a[N];



int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int i, j;
    ll n,m;
    cin>>n>>m;
    ll min,max;
    // to find maximum pair of friends:-
    // distribute 1-1 players in m-1 teams(since we have to give atleast 1 player in each team) and remaining all players in 1 single team.(this is shown by temp below) -> from n players, m-1 players are distributed in m-1 teams so remaining players(n-(m-1)) will be distributed in 1 team.
    ll temp=n-(m-1);
    // now pairs of friends in one team can be found using combination using formula nCr = n*(n-1)*(n-2)***(n-(r-1))/r*(r-1)****(1)
    // (nC2) = temp(temp-1)/2 
    max = temp*(temp-1)/2;
    // to find minimum pair of friends:-
    // distribute players evenly in each team so as to get minimum pairs in each team.
    ll sn=n/m;
    ll rem=n%m;
    // in remainder number of teams distibute (sn+1) players using (sn+1)*sn/2 and in remaining (m-remainder) number of teams distribute sn players.

    // e.g. n=5 m=3
    // sn = n/m = 1
    // rem = n%m=2
    // in rem = 2 teams distribute sn+1 = 2 players(1st and 2nd team)
    // in (m - rem) = 1 team distribute sn = 1 player(3rd team)
    // distribution for minimum pairs of friends:- 2 2 1

    // this calculation will be done in long long so we have make all variables as long long.
    min = rem*(sn+1)*sn/2 + (m-rem)*(sn)*(sn-1)/2;
    cout<<min<<" "<<max<<endl;
    return 0;
}
