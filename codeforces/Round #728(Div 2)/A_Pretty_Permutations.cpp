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

    int i, j, n, m;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        // my approach:- worst(long code) although no TLE and correct
        // vector<int> a(n);
        // FOR(i,0,n-1){
        //     a[i]=(i+1);
        // }
        // if(n%2==0){
        //     FOR(i,0,n-1){
        //         swap(a[i],a[i+1]);
        //         i++;
        //     }
        // }else{
        //     FOR(i,1,n-3){
        //         // swap(a[i],a[i+1]);
        //         a[i-1]=(i+1);
        //         a[i]=i;
        //         i++;
        //     }
        //     a[n-3]=n;
        //     a[n-2]=n-2;
        //     a[n-1]=n-1;
        //     // swap(a[n-1],a[0]);
        // }
        // FOR(i,0,n-1){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;


        // better approach:-

        // odd case
        if(n%2!=0){
            // 1st print 1st 3 digits(with min distance) 
            cout<<3<<" "<<1<<" "<<2<<" ";
            // now the length is even so handle like even case from n=4 to last.
            // logic for swapping every consecutive(alternate) terms(in case the length is even).
            // loop upto n-1 bcoz if i=n-1 you will print i+1 = n first and then i = n-1. 
            for(int i=4;i<n;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }
        else{   // even case
            // logic for swapping every consecutive(alternate) terms(in case the length is even).
            // start from n=1 bcoz we want to have permutation of numbers 1 to n
            // loop upto n-1 bcoz if i=n-1 you will print i+1 = n first and then i = n-1.
            for(int i=1;i<n;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
