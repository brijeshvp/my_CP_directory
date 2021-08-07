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
        int a[n+1];
        FOR(i,1,n){
            cin>>a[i];
        }
        int ct=0;
        // my approach:- TLE error - TC: O(n^2)
        // FOR(i,1,n){
            // FOR(j,i+1,n){
            //     if((a[i]*a[j])==(i+j)){
            //         ct++;
            //     }
            // }
        // }

        // better approach:- TC: O(nlogn)

        // we want a[i]*a[j] = i + j
        // loop from i=1 to n -> basically fix i using outer loop
        // if i=1 then in the equation we will fix value of i and a[i]
        // let say i=1 and a[i]=2 we get:- 2*a[j] = 1 + j
        // So, a[j] = (1+j)/2
        // So, 1+j must be divisible by 2(1+j must be divisible by a[i])
        // that means we have to find multiples of 2(a[i]) which is greater than 1(i) such that our equation satisfies. We try for all the multiples and if condition satisfies we increment count by 1. 
        for(int i=1;i<=n;++i){
            // finding multiple of a[i] greater than i
            int mul = (i/a[i]+1)*a[i];
            // this mul is nothing but i + j
            // So, mul = i + j   ->     j = mul - i
            // So, we have to check for all the j's until n
            while(mul-i<=n){
                // j=mul-i
                // if i is not equal to j and a[j]=mul/a[i] -> a[j]=(i+j)/a[i] as per equation,
                // then we will increment count by 1.
                if(i!=(mul-i) && a[mul-i] == mul/a[i]) ct++;
                // and then try for next multiple of a[i].
                mul+=a[i];
            }
        }
        // output count/2 bcoz we have to output for each pair(we have counted for each a[i] so divide by 2) 
        cout<<ct/2<<endl;

    }
    return 0;
}
