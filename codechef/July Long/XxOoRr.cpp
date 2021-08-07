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

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        ll a[n];
        int min_ops=0;

        FOR(i,0,n-1){
            cin>>a[i];
        }

        int ct;
        // 1st bit(MSB) will be for storing sign of a number(thus from 64, only 63 bits left)
        vector<int> ith_bit(63);
        FOR(p,0,62){
            // storing count whose pth bit is set so as to clear it in one operation
            ct=0;
            FOR(j,0,n-1){
                // if pth bit is set -> store in count
                if(a[j]%2!=0){
                    ct++;
                }
                a[j]/=2;    //removing last bit
            }
            ith_bit[p] = ct;    //store count of elts whose pth bit is set at pth location
        }
        int ans=0;
        FOR(p,0,62){
            // if count at that location is multiple of k than add #operations = count/k
            if(ith_bit[p]%k==0){
                ans+=(ith_bit[p]/k);
            }
            // else add one to count/k
            else{
                ans+=(ith_bit[p]/k + 1);
            }
        }
        cout<<ans<<"\n";

        
        // FOR(p,0,63){
        //     bool flag=0;
        //     int temp_k=k;
        //     FOR(i,0,n-1){
        //         if((a[i]&(1<<p)) && temp_k){
        //             a[i]=(a[i]^(1<<p));
        //             temp_k--;
        //             flag=1;
        //         }
        //         if(temp_k==0 ){
        //             min_ops++;
        //             temp_k=k;
        //         }
        //     }
        //     if(flag==1 && temp_k!=0){
        //         min_ops++;
        //     }
        // }
        // cout<<min_ops<<"\n";

    }

    return 0;
}
