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
// const int N = 3e5, M = N;
//=======================

// vi g[N];
// int a[N];

// const int N=1e6 + 2;
// vl hsh;


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int i, j, n, m;
    int t;
    cin>>t;
    while(t--){
        // cin>>m;
        // A.pb(m);
        ll D,d,P,Q;
        ll sum=0;
        cin>>D>>d>>P>>Q;


        
        // ll temp_D = D;
        // sum+=(P*D);

        // logic 1:-
        // while(D!=1){
        //     D/=2;
        //     if(temp_D-d >0){
        //         sum+=(Q*(temp_D-d));
        //     }
        //     temp_D-=d;
        // }


        // logic 2:-
        // while(D>0){
        //     if(D-d >0){
        //         sum+=(Q*(D-d));
        //     }
        //     D-=d;
        // }


        // logic 3:-
        // int ct=0;
        // while(D!=1){
        //     D/=2;
        //     ct++;
        // }
        // int first_ct= (ct*(ct+1))/2;
        // // cout<<ct;
        // // cout<<first_ct;
        // sum+=((ct*Q*temp_D) - (first_ct*Q*d));


        // // logic 4:-
        ll divs_x=D/d;

        if(divs_x%2==0){
            sum+= d*((divs_x/2)*(2*P+(divs_x-1)*Q));
        }
        else{
            sum+= d*(divs_x*(P+((divs_x-1)/2)*Q));
        }
        sum+= (D%d)*(P+(divs_x)*Q);
        cout<<sum<<endl;
    }
    return 0;
}
