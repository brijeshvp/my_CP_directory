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


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        ll a[n];
        FOR(i,0,n-1){
            cin>>a[i];
        }
        // my approach(wrong)
        // sort(a,a+n);
        // // ct stores #elts which are not multiple of smallest elt
        // ll ct=0;
        // ll first = a[0];
        // FOR(i,0,n-1){
        //     if(a[i]%first){
        //         ct++;
        //     }
        // }
        // ll denomination;
        // if(ct>1){
        //     denomination=1;
        // }
        // else{
        //     denomination=a[0];
        // }

        // if(a[n-1]!=denomination){
        //     a[n-1]=denomination;
        // }

        // ll ans=0;
        // FOR(i,0,n-1){
        //     ans+= a[i]/denomination;
        // }

        // cout<<ans<<"\n";


        // optimized approach:-

        ll leftGcd[n],rightGcd[n],midGcd[n];

        leftGcd[0] = 0;
        FOR(i,1,n-1){
            leftGcd[i] = __gcd(a[i-1],leftGcd[i-1]);
        }
        // FOR(i,0,n-1){
        //     cout<<leftGcd[i]<<" ";
        // }

        rightGcd[n-1] = 0;
        FORd(i,n-2,0){
            rightGcd[i] = __gcd(a[i+1],rightGcd[i+1]);
        }
        // FOR(i,0,n-1){
        //     cout<<rightGcd[i]<<" ";
        // }

        FOR(i,0,n-1){
            midGcd[i] = __gcd(leftGcd[i],rightGcd[i]);
        }
        // FOR(i,0,n-1){
        //     cout<<midGcd[i]<<" ";
        // }

        ll mid_max=INT_MIN;
        int arr_mid_index=-1;
        ll temp;
        FOR(i,0,n-1){
            if(midGcd[i]>mid_max && i>arr_mid_index){
                mid_max = midGcd[i];
                arr_mid_index = i;
                temp = a[i];
            }
            else if(midGcd[i]==mid_max){
                if(a[i]>temp){
                    arr_mid_index=i;
                    temp = a[i];
                }

            }
        }

        a[arr_mid_index] = mid_max;

        // cout<<mid_max<<" "<<arr_mid_index<<"\n";
        ll ans=0;
        FOR(i,0,n-1){
            if(mid_max==0)
                break;

            ans+= (a[i]/mid_max);
                
        }

        cout<<ans<<"\n";



        // ll sum=0;
        // FOR(i,0,n-1){
        //     sum+= a[i];
        // }
        // ll mn = LLONG_MAX;
        // FOR(i,0,n-1){
        //     ans = ((sum - a[i] + midGcd[i])/midGcd[i]);
        //     if(ans<mn) mn =ans;
        // }

        // cout<<mn<<"\n";
    }

    return 0;
}
