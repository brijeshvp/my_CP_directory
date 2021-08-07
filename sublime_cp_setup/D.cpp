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
#define ff first
#define ss second
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

// #ifndef ONLINE_JUDGE
// #define debug(x,n,m) cerr << #x <<" "; _print(x,n,m); cerr << endl;
// #else
// #define debug(x,n,m)
// #endif

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

template <class T> void _print(T **a,T n,T m) {cerr << "[ "; for(T i=0;i<n;++i){ for(T j=0; j<m;++j){_print(a[i][j]); cerr << " ";} cerr<<endl;} cerr << " ]";}


int max_sum_rectangle(int **a,int n,int m){
    int **prefix_sum = new int*[n];
    for(int i=0;i<n;++i){
        prefix_sum[i] = new int[m];
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            int sum=0;
            for(int k=i;k<n;++k){
                for(int l=j;l<m;++l){
                    sum+=a[k][l];
                }
            }
            prefix_sum[i][j] = sum;
        }
    }
    // debug(prefix_sum,n,m)
    // int sum=0;
    int maxi = INT_MIN;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            // int sum=0;
            for(int k=i;k<n;++k){
                // int sum=0;
                for(int l=j;l<m;++l){
                    int sum=0;
                    sum+= (prefix_sum[i][j] - prefix_sum[i][l+1] - prefix_sum[k+1][j] + prefix_sum[k+1][l+1]);
                    maxi = max(maxi,sum);
                    debug(sum)
                    debug(maxi)
                }
                // debug(sum)
            }
            
        }
    }
    debug(maxi)
    for(int i=0;i<n;++i){
        delete prefix_sum[i];
    }
    delete [] prefix_sum;
    return maxi;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int n,m;
    cin>>n>>m;

    // int a[n][m];
    int **a = new int*[n];
    for(int i=0;i<n;++i){
        a[i] = new int[m];
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>a[i][j];
        }
    }
    // debug(a,n,m)
    int res = max_sum_rectangle(a,n,m);
    cout<<res<<endl;


    for(int i=0;i<n;++i){
        delete a[i];
    }
    delete [] a;
    return 0;
}