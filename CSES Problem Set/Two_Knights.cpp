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

// Logic:- find the positions where we can place our knights(ghodas) in n*n chess board, subtract the positions where they attack each other.

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int i, j, m;
    ll n;
    cin>>n;
    for(long long i=1;i<=n;++i){
       
        // total cases without both knights attack = n * (n-1)    

        // we divide by 2 to total cases bcoz, both knights are identical.

        //  subtract cases where knights attack:-
        // 1. subtract 4 corner cases, all of them will have same cases.(4*2).
        // 2. subtract the cases for 8 cells adjacent to all 4 corners, all of them will have same cases.(8*3) 
        // 3. subtact cases for remaining cells(n-4) or (i-4) in the same 1st col, all of them will have same case.(i-4) cells of 1 side and total 4 sides, all have total 4 cases. So, (i-4)*4*4.

        // now all cases for outer rows and cols are taken care of.
        // now our chessboard bcomes (n-2)*(n-2)
        // 4. subtract 4 corner cases of this smaller board, all of them will have same cases. (4*4)
        // 5. now remaining (n-4) cells of 1st col of this smaller board, will have same cases=6 and this is similar for all 4 sides of this smaller board. (i-4)*6*4

        // now all the cases for outer rows and cols of this smaller board is also taken care of.

        // now our smaller chessboard left is (n-4)*(n-4)
        // all the cells of this smaller board will have same case = 8. So, (i-4)*(i-4)*8

        // we again divide by 2 before subtracting bcoz two knights are identical. 


        // this all couts will give correct results bcoz all these are same equations(just they are simplified going down)

        // cout<<((i*i) * ((i*i)-1))/2 - ( (4*2) + (8*3) + ((i-4)*4*4) + (4*4) + ((i-4)*6*4) + ((i-4)*(i-4)*8) )/2<<endl;
        // cout<<((i*i) * ((i*i)-1))/2 - 4*((i*i)-3*i +2)<<endl;
        cout<<((i*i) * ((i*i)-1))/2 - 4*(i-1)*(i-2)<<endl;
    }
    return 0;
}
