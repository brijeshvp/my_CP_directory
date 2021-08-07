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
// const int N =  3e5, M = N;
//=======================

// vi g[N];
// int a[N];


// Predicate functions:- a function which either returns true or false
// Monotonic functions:- a function which follows particular order
// Monotonic Predicate functions:- 
    // 1. F F F T T T T
    // 2. T T T T F F F
    // 3. T T T T T T T
    // 4. F F F F F F F

// now using binary search, we can find elements like first T, first F, last T,last F, etc using upper_bound, lower_bound concepts.
// in example 1, to find 1st true(T), binary search -> check mid elt, if it is F(that elt can't be first T) so, lo=mid+1. if it is T(that elt may be first T),so  hi=mid.

// Refer problem statement on SPOJ:-
// https://www.spoj.com/problems/EKO/

// Constraints:-
// N = #trees is 10^6 so we are declaring array of just greater size than that.
// NOTE:- we know that arrays of size greater than or equal to 10^5, must be declared globally, else segmentation fault.
const int N=1e6+10;
// height of trees can be 10^9, so we are storing heights as long long
ll trees[N];
// n = # trees is 10^6 so it can be int 
int n;
// m = amount of wood to be taken is 2*10^9 so has to be long long
ll m;
// We are defining variables n and m globally so that we need not pass this to our predicate function every time.

// return values of below function:
// h= 0 1 2 3 ..... x x+1.....10^9
//    T T T T       T  F  F  F  F
// we need to find max height such that wood>=M.
// that means we need to find value of x(where we have last true).

// Monotonic Predicate function:-
bool isWoodSufficient(int h){
    // ll wood will store that, when we cut wood at height h, how much wood is collected and than check whether wood >=M or not.
    ll wood=0;
    // now we will loop through all trees height to collect wood at height above h.
    FOR(i,0,n-1){
        // if height of tree is either equal to or greater than height h, than only tree is cut and wood is collected
        if(trees[i]>=h){
            // collected wood = height of tree - height h.
            wood+= (trees[i]-h);
        }
    }
    // we need to return true if collected wood is greater than or equal to m else false.
    return wood>=m;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    // int i,j,n,m;
    int i,j;
    cin>>n>>m;
    FOR(i,0,n-1){
        cin>>trees[i]; 
    }

    // We are applying binary search on height, so lower height =0(ground level) and higher height=Constraint of H for all trees = 10^9.
    // And since we are taking M(wood to be collected) and array(which stores heights of trees) as long long,we also take heights lo and hi in long long.
    ll lo=0, hi=1e9, mid; 
    while(hi-lo > 1){
        mid = (hi + lo)/2;  //int mid=(hi+lo)>>1;
        if(isWoodSufficient(mid)){
            // if mid elt is T, than it can be last true, so we will include mid in our next search space
            lo=mid;
        }
        else{
            // if mid elt is F, than it can't be last true, so we will not include mid in our next search space
            hi=mid-1;
        }
    }
    // now, at the end of while loop, either lo=hi-1 or lo=hi, but since we need maximum height(last true), we will check for value at hi first and than lo. bcoz if hi is lo+1 and since both will return true than hi is last true not lo. 
    if(isWoodSufficient(hi)){
        cout<<hi<<endl;
    }
    // now it is given in question that, "The sum of all heights will exceed M, thus Mirko will always be able to obtain the required amount of wood". so wood will always be found, so we don't need to handle 3rd case of not found(print -1 in else case and handle 2nd case using else if-> for printing lo value)
    else{
        cout<<lo<<endl;
    }
    return 0;
}

// TIME COMPLEXITY:- O(Nlog(H)) bcoz while loop runs log(H) times and isWoodSufficient() function inside while loop runs N times where N is array size.