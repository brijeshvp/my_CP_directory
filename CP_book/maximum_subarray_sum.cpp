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


// // Algorithm 1:- brute-force approach:- iterate over all subarrays and maintain its sum.
// Calculate the sum between a window of elts given by two outer loops
// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     int arr[]={-1,2,4,-3,5,2,-5,2};
//     int i, j, k,n, m;
//     n=sizeof(arr)/sizeof(arr[0]);
//     int best=0;
//     FOR(i,0,n-1){
//         FOR(j,i,n-1){
//             int sum=0;  //each time, recalculate sum
//             FOR(k,i,j){
//                 sum+= arr[k];
//             }
//             best= max(sum,best);
//         }
//     }
//     cout<<best<<"\n";
//     return 0;
// }


// // Algorithm 2:- optimized approach:- we can remove innermost loop by calculating sum as an when right index moves.
// // Calculate the sum from that elt(k) to the last elt for all elts(k) and store the maximum sum.
// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

//     int arr[]={-1,2,4,-3,5,2,-5,2};
//     int i, j, k,n, m;
//     n=sizeof(arr)/sizeof(arr[0]);
//     int best=0;
//     FOR(i,0,n-1){
//         int sum=0;  //each time, recalculate sum
//         FOR(j,i,n-1){
//             sum+= arr[j];
//             best= max(sum,best);
//         }
//     }
//     cout<<best<<"\n"; 
//     return 0;
// }


// // Algorithm 3:- fully optimized Kadane's algorithm:- Calculate the sum upto that index elt and store max sum to best variable, if sum is negative at any time update sum to 0.
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int arr[]={-1,2,4,-3,5,2,-5,2};
    int i, j, n, m;
    n=sizeof(arr)/sizeof(arr[0]);
    int best=arr[0]; //or int best = INT_MIN;   (both are valid) 
    int sum=0;
    FOR(i,0,n-1){
        sum+=arr[i];
        best=max(best,sum);
        if(sum<0)
            sum=0;
    }
    cout<<best<<endl;
    return 0;
}
