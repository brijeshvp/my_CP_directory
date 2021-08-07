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
// const int N = 3e5, M = N;
//=======================

// vi g[N];
// int a[N];


// Refer problem statement on SPOJ:-
// https://www.spoj.com/problems/AGGRCOW/

const int N=1e5+10;
// positions array stores location of stalls
int positions[N];
int n,cows;
// We are defining variables n and m globally so that we need not pass this to our predicate function every time.

// return values of below function:
// minDistance= 0 1 2 3 ..... x x+1.....10^9
//              T T T T       T  F  F  F  F
// we need to find largest minimum distance such that all cows are placed.
// that means we need to find value of x(where we have last true).

// Monotonic Predicate function:-
bool canPlaceCows(int minDist){
    // lastPos tells where we have placed our last Cow(initially no cows are placed so it is -1).
    int lastPos=-1;
    
    // REMEMBER:- NEVER CHANGE GLOBAL VARIABLE INSIDE ANY FUNCTION.

    // we need count of cows in this function but since we need to modify cows count in this function, we will create a copy of cows count.
    int cows_ct = cows;
    // loop through all stalls and check where we have placed last cow and can we place cow on our current(ith) stall or not.
    for(int i=0;i<n;++i){
        // if distance between current stall and last placed cow is greater than or equal to our min distance than we can place cows or if it is our first cow(lastPos=-1) than we can place cow.
        if(positions[i]-lastPos >=minDist || lastPos==-1){
                cows_ct--;
                // cow is palced so decrement count and update last position
                lastPos=positions[i];
        }
        if(cows_ct==0) break;
    }
    // we need to return true if all cows are placed else return false
    return cows_ct==0;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    // int i,j,n,m;
    int i,j;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>cows;
        FOR(i,0,n-1){
            cin>>positions[i];
        }
        // We are applying binary search on distances, so smallest distance =0(first point on number line) and largest distance =Constraint of distance = 10^9.
        int lo=0, hi=1e9, mid;
        // we are sorting the array, bcoz we need distances as they are on number line, bcoz we are comparing from smaller distance to larger in canPlaceCows() function.
        sort(positions,positions+n);
        while(hi-lo>1){
            mid=(hi+lo)/2;  //mid=(hi+lo)>>1;
            if(canPlaceCows(mid)){
                // if mid elt is T, than it can be last true, so we will include mid in our next search space
                lo=mid;
            }
            else{
            // if mid elt is F, than it can't be last true, so we will not include mid in our next search space
                hi=mid-1;
            }
        }
        // now, at the end of while loop, either lo=hi-1 or lo=hi, but since we need to maximize the minimum distance(last true), we will check for value at hi first and than lo. bcoz if hi is lo+1 and since both will return true than hi is last true not lo.
        if(canPlaceCows(hi)){
            cout<<hi<<endl;
        }
        // now, minDIstance will always be found bcoz distance =0 is always our minimum distance so we don't need to handle 3rd case of not found(print -1 in else case and handle 2nd case using else if-> for printing lo value)
        else{
            cout<<lo<<endl;
        }
    }
    return 0;
}


// TIME COMPLEXITY:- O(N*log(10^9)) bcoz while loop runs log(10^9) times(10^9 is constraint of distances) and canPlaceCows() function inside while loop runs N times where N is array size.