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
#define popb pop_back
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
typedef stack<int>    sti;
typedef set<int>      seti;
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

    int i,j,n,m;
    cin>>n;
    vi v(n);
    FOR(i,0,n-1){
        cin>>v[i];
    }
    int to_find;
    cin>>to_find;
    int lo=0,hi=n-1;
    // implementation of binary search and lower_bound has same logic
    // logic of upper_bound differs slightly
    while(hi-lo > 1){
        int mid=(hi+lo)/2;  //int mid=(hi+lo)>>1;
        if(v[mid] < to_find){
            // As per the logic of binary search,
            // mid elt can't be the potential candidate for our elt bcoz mid elt is strictly less than elt to be found
            // so we will not include mid in our search space
            // new search space elts to the right of mid
            lo = mid+1;
        }
        else{
            // mid elt can be the potential candidate for our elt bcoz mid elt is greater than or may be equal to the elt to be found
            // so we have to include mid in our search space
            // new search space elts to the left of mid + mid elt
            hi=mid;
        }
    }

    // after the while loop, we will have the values of lo and hi indexes.
    // And as per the condition of while loop, the maximum difference between lo and hi can be 1.
    // So at the end of loop we have 2 cases:-
    // 1. lo=hi-1(lo is just 1 smaller index than high)
    // 2. lo=hi(lo and hi are same indexes)
    // So all we need to check is values at hi and lo to find our elt.
    // if both are not equal to our elt -> elt not found.
    if(v[lo] == to_find){
        cout<<lo<<endl;
    }
    else if(v[hi] == to_find){
        cout<<hi<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}
