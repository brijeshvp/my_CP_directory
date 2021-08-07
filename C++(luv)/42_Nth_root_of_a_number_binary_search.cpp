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

double eps=1e-7;
// if we want accuracy of x decimal places after decimal, we have to set eps = 1e-(x+1).

// multiply function to multiply mid n times to find Nth root and to check mid*mid*... n times = x or not.
double multiply(double mid,int n){
    double ans=1;
    FOR(i,0,n-1){
        ans*=mid;
    }
    return ans;
}


// Nth root logic
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int i,j,m;
    double x,n;
    // x is the number to take root
    // n is the nth root to take of x
    cin>>x>>n;
    double lo=1, hi=x,mid;
    while(hi - lo > eps){
        mid = (hi + lo)/2;
        if(multiply(mid,n) < x){
            // we can't do mid+1 in both cases, bcoz we want precisions, if we do +1 -> infinite real numbers will be missed to check and we will not get correct answer. so every time we have to take lo and hi as mid only.
            lo=mid;
        }
        else{
            hi=mid;
        }
    }
    // we can see 10 decimal places but upto 5 decimals hi and lo will be same(precise answer upto 5 digits and then may be same or different digits)
    cout<<setprecision(10)<<lo<<"\n"<<hi<<endl;
    // get square root using pow() function(just to compare our answers)
    // if you compare, we will get same answer as pow() function upto 5 decimal places.
    cout<<pow(x,1.0/n);
    return 0;
}





// sqaure root logic

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

//     int i,j,n,m;
//     double x;
//     cin>>x;
//     double lo=1, hi=x,mid;
//     while(hi - lo > eps){
//         mid = (hi + lo)/2;
//         if(mid*mid < x){
//             // we can't do mid+1 in both cases, bcoz we want precisions, if we do +1 -> infinite real numbers will be missed to check and we will not get correct answer. so every time we have to take lo and hi as mid only.
//             lo=mid;
//         }
//         else{
//             hi=mid;
//         }
//     }
        
        // bcoz our precision is upto 5 decimal places(double eps=1e-6).
//     // we can see 10 decimal places but upto 5 decimals hi and lo will be same(precise answer upto 5 digits and then may be same or different digits)
//     cout<<setprecision(10)<<lo<<"\n"<<hi<<endl;
//     // get square root using pow() function(just to compare our answers)
//     // if you compare, we will get same answer as pow() function upto 5 decimal places.
//     cout<<pow(x,1.0/2);
//     return 0;
// }
