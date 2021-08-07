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

// (very imp, so note down in note)
// Approach 1: https://www.geeksforgeeks.org/split-numbers-from-1-to-n-into-two-equal-sum-subsets/

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int i, j, m;
    ll n;
    cin>>n;
    ll sum=n*(n+1)/2;

    // // Approach 1:- as discussed in geeksforgeeks
    // ll ans=sum/2;
    // if(sum&1){     // sum is odd
    //     cout<<"NO\n";
    //     return 0;
    // }
        

    // vector<int> set1,set2;
    // FORd(i,n,1){
    //     if(i<=ans){
    //         set1.pb(i);
    //         ans-=i;
    //     }
    //     else{
    //         set2.pb(i);
    //     }
    // }

    // cout<<"YES\n";
    // cout<<set1.size()<<"\n";
    // for(auto it : set1){
    //     cout<<it<<" ";
    // }
    // cout<<"\n";
    // cout<<set2.size()<<"\n";
    // for(auto it : set2){
    //     cout<<it<<" ";
    // }
    // cout<<"\n";

    // approach 2:-
    if(sum&1){
        cout<<"NO\n";
        return 0;
    }

    vector<int> set1,set2;

    // Case 1:- n is multiple of 4
    if(n%4==0){
        // 1st n/4 elts insert in 1st set
        FOR(i,1,n/4){
            set1.pb(i);
        }
        // last n/4 elts insert in 1st set
        FOR(i,0,n/4-1){
            set1.pb(n-i);
        }
        // all remaining middle elts, insert in 2nd set 
        FOR(i,n/4+1,set1[set1.size()-1]-1){
            set2.pb(i);
        }
    }
    // Case 2:- n has 3 more elts than multiple of 4.
    // in that case, insert 1st 3 elts manually, 1 and 2 in 1st set and 3 in 2nd set.
    // and now remaining elts are multiple of 4, so handle it as case 1.
    else if(n%4==3){
        set1.pb(1);
        set1.pb(2);
        set2.pb(3);
        // 1st n/4 elts in set 1
        FOR(i,4,4+n/4-1){
            set1.pb(i);
        }
        // last n/4 elts in set 2
        FOR(i,0,n/4-1){
            set1.pb(n-i);
        }
        // remaining all middle elts in set 2
        FOR(i,4+n/4,set1[set1.size()-1]-1){
            set2.pb(i);
        }
    }
    cout<<"YES\n";
    cout<<set1.size()<<"\n";
    for(auto it : set1){
        cout<<it<<" ";
    }
    cout<<"\n";
    cout<<set2.size()<<"\n";
    for(auto it : set2){
        cout<<it<<" ";
    }
    cout<<"\n";

    return 0;
}
