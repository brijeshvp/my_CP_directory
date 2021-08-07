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

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n=s.size();
        // indices which tracks whether the ith letter is added on left or right in the string.
        int left=0,right=n-1;
        // if failed flag is true, than its not alphabetical string
        bool failed=false;

        // initially, string is empty:- s=""
        // letter number for each character:-
        // 1-a, 2-b, 3-c,........,26-z

        // if size of the string is n, check from nth letter of alphabet.
        // As per the rules, we are adding a char either at left or right of the current string.
        // So, nth character of alphabet will be either leftmost char or the rightmost char in the string

        // So, we will loop in decreasing order of size of string
        FORd(i,n,1){
            // if nth char is found at leftmost, increase left pointer by 1, so we can check for next n-1th,n-2th,... letter and so on.
            if(s[left]==(i+96)){
                left++;
            }
            // else if, nth char is found at rightmost, decrease right pointer by 1, so we can check for next n-1th, n-2th,.... letter and so on. 
            else if(s[right]==(i+96)){
                right--;
            }
            // if nth char is not found at either of leftmost or rightmost, it cannot be alphabetical, so make failed = true.
            else{
                failed=true;
                break;
            }
        }

        // if failed is false, that means string doesn't failed to be alphabetical, so print yes.
        if(failed==false){
            cout<<"YES\n";
        }
        // if failed is true, that means string failed to be alphabetical, so print no.
        else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}