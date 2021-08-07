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
        ll a,b;
        cin>>a>>b;
        // // this approach is correct but will give TLE
        // while(a>0 && b>0){
        //     if(a>=b){
        //         a-=2;
        //         b-=1;
        //     }
        //     else if(a<b){
        //         b-=2;
        //         a-=1;
        //     }
        // }
        // if(a==0 && b==0){
        //     cout<<"YES\n";
        // }else{
        //     cout<<"NO\n";
        // }

        // maintaining smaller number in a
        if(a>b) swap(a,b);

        if(2*a < b){
            cout<<"NO\n";
        }
        else{
            // either a and b are multiple of 3(thus after taking remainder, both will become zero) or after taking modulo one is 1 and other is 2.
            a%=3; b%=3;
            // again maintaining smaller number in a
            if(a>b) swap(a,b);

            // since smaller number is in a, b=1 and a=2 can't be the case(but that will be sure that both the numbers are either 1,2 or 2,1 or 0,0)
            if( (a==0 && b==0) || (a==1 && b==2) ){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
