#include<bits/stdc++.h>

using namespace std;


#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define REP(i,a) FOR(i,0,(int)(a)-1)
#define FORd(i,a,b) for(int i=(a);i>=(b);i--)

#define si(x)    scanf("%d",&x)
#define sl(x)    scanf("%lld",&x)
#define ss(s)    scanf("%s",s)
#define pi(x)    printf("%d\n",x)
#define pl(x)    printf("%lld\n",x)
#define ps(s)    printf("%s\n",s)

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"

#define pb push_back
#define popb pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626

#define set_bits __builtin_popcountll
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

typedef pair<int, int>    pii;
typedef pair<ll, ll>    pl;
typedef vector<int>        vi;
typedef vector<ll>        vl;
typedef vector<pii>        vpii;
typedef vector<pl>        vpl;
typedef vector<vi>        vvi;
typedef vector<vl>        vvl;
typedef stack<int>    sti;
typedef set<int>      seti;



#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int no_of_shops;
    cin>>no_of_shops;

    int drink_price[no_of_shops];

    FOR(i,0,no_of_shops-1){
        cin>>drink_price[i];
    }
    
    int days;
    cin>>days;

    // sort drink prices of each shops, so as to apply binary search
    sort(drink_price, drink_price + no_of_shops);

    
    FOR(i,0,days-1){
        // taKe input of each q
        ll daily_spend;
        cin>>daily_spend;


        // binary search(according to luv bhaiya's method)
        int lo=0,hi=no_of_shops-1,mid;
        while(hi-lo > 1){
            mid = (hi + lo)/2;
            if(daily_spend < drink_price[mid]){
                hi = mid-1;
            }
            else{
                lo = mid;
            }
        }

        // at the end of while loop, daily_spend can be either of these 3 cases(bcoz either lo=hi or lo=hi-1 at the end of while loop):-


        // 1. 1st check if daily_spend is greater than or equal to hi, if yes we can buy drink from all the stores upto that index = hi.
        // 2. if daily_spend is less than hi, check if it is greater than or equal to lo, if yes we can buy drink from all the stores upto that index = lo.
        // 3. if niether of above 2 case holds, that means daily_spend is less than the drink_prices of all the stores -> we cannot buy a drink in that case -> output = 0.
         
        // since 0-based indexed array for drink_price, we output +1 to the result.
        if(daily_spend >= drink_price[hi]) cout<<(hi+1)<<"\n";
        else if(daily_spend >= drink_price[lo]) cout<<(lo+1)<<"\n";
        else cout<<0<<"\n";

    }
    return 0;
}

// TC:- 10^5 + 10^5 * log(10^5) 