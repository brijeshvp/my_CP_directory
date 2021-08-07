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
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";}
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

    int n;
    cin>>n;

    // wrong approach:-
    // vector<pair<int,int>> desc_laptop;
    // FOR(i,0,n-1){
    //     int a,b;
    //     cin>>a>>b;

    //     desc_laptop.pb({a,b});
    // }

    // sort(desc_laptop.begin(),desc_laptop.end());


    // debug(desc_laptop);
    // bool flag = false;

    // FOR(i,0,n-2){
    //     int a=desc_laptop[i].F;
    //     int b=desc_laptop[i].S;
    //     int lo=i+1,hi=n-1,mid;
        
    //     while(hi-lo > 1){
    //         mid = (hi + lo)/2;

    //         if(b > desc_laptop[mid].S){
    //             flag=true;
    //             break;
    //         }
    //         else{
    //             lo = mid+1;
    //         }
    //     }
    //     debug(lo);
    //     debug(mid);
    //     debug(hi);
    //     if(flag) break;
    //     else if(b > desc_laptop[hi].S){
    //         flag = true;
    //         break;   
    //     }
    //     else if(b > desc_laptop[lo].S){
    //         flag = true;
    //         break;   
    //     }
    // }

    // if(flag){
    //     cout<<"Happy Alex\n";
    // }
    // else{
    //     cout<<"Poor Alex\n";
    // }


    // one observation is that both price and description of laptops are less than or equal to n for all laptops.
    // so below test case 1 is not valid.

    // refer test case 2 and 3 for clarity.

    // new solution as per test case 2 and 3.
    FOR(i,0,n-1){
        int a,b;
        cin>>a>>b;
        if(a!=b){
            cout<<"Happy Alex\n";
            return 0;
        }
    }
    cout<<"Poor Alex\n";
    return 0;
}

/*
test case 1:-(not valid)
7
1 8
2 8
3 9
4 10
5 10
6 7
7 12


//since all a and b are less than or equal to n, then if a!=b for all n=7  pairs, then simply output Happy Alex bcoz there is one inversion(i<j but b[i]>b[j]) in b(look at last pair). and that's what we want to check.

// So,we need to check for only 1st pair, if a!=b for 1st pair, automatically there will be inversion later bcoz all a's and b's are distinct and less than or equal to n. 

//if a==b for all pairs a and b, then there will be no inversion.(refer test case 3)

test case 2:-(valid)
7
1 2
2 3
3 4
4 5
5 6
6 7
7 1

test case 3:-(valid)
7
1 1
2 2
3 3
4 4
5 5
6 6
7 7
*/