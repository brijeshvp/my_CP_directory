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

int hsh[26];

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int i, j, n, m;
    string s;
    cin>>s;
    n=s.size();
    // storing count of all chars
    FOR(i,0,n-1){
        hsh[s[i]-'A']++;
    }
    // counting chars that occur odd times
    int ct=0;
    FOR(i,0,25){
        if(hsh[i]&1) ct++;
    }

    // if there are more than 1 char occuring odd times than palindrome can't be made(there has to be only 1 char occuring odd times)
    if(ct>1){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    // if there is either 1 char or no char occuring odd times
    else{
        // seperate odd and even count chars
        // NOTE:- there will be only 1 char occuring odd number of times(1,3,5,...)
        // there can be multiple chars all of which occurs even times.
        string t;
        FOR(i,0,25){
            // if a char occurs even number of times, store half times in string t and then print it.
            if(hsh[i]>0 && hsh[i]%2==0){
                
                int x = hsh[i]/2;
                while(x--){
                    // even.pb(i + 'A');
                        t+=(i+'A');
                }  
            }
        }
        cout<<t;
        FOR(i,0,25){
            // printing 1 char which has occurs odd times -> odd number of times
            if(hsh[i]%2==1){
                while(hsh[i]--){
                    // odd.pb(i + 'A');
                    cout<<(char)(i+'A');
                }
            }
        }
        // printing chars which occurs even times half of the times in reverse order so as to maintain palindrome property.
        reverse(t.begin(),t.end());
        cout<<t<<"\n";
    }
    
    return 0;
}
