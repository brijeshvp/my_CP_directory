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

// very good logic based question:-
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int i, j, n, m;
    int t;
    cin>>t;
    while(t--){
        // we have to make row,col and ans as long long bcoz we are doing row*row = 10^9*10^9 = 10^18 operations. So all has to be long long.
        ll x,y;
        cin>>x>>y;
        ll ans;
        // x = our row and y = our col
        // column is greater than row
        if(x<y){
            // if column is odd -> then 1st value in that col is col*col
            // and if column is odd -> then value decreases in that column upto that row number(same row as col)
            if(y&1)
                ans = (y*y) - (x-1);
            // if column is even -> then 1st value in that col is (col-1)*(col-1) + 1
            // and if column is even -> then value increases in that column upto that row number(same row as col)
            else
                ans = ((y-1)*(y-1) + 1) + (x-1); 
        }
        // row is greater than column
        else{
            // if row is odd -> then 1st value in that row is (row-1)*(row-1) + 1
            // and if row is odd -> then value increases in that row upto that col number(same col as row)
            if(x&1)
                ans = ((x-1)*(x-1) + 1) + (y-1);
            // if row is even -> then 1st value in that row is row*row
            // and if row is even -> then value decreases in that row upto that col number(same col as row)
            else
                ans = (x*x) - (y-1);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
