#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
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


int a[6][6];
int swap_row(int i){
    if(1<=i<=4){
        for(int j=1;j<=5;++j){
            int temp=a[i][j];
            a[i][j]=a[i+1][j];
            a[i+1][j]=temp;
        }
    }
}

int swap_col(int j){

}

void solve() {
    int i, j, step=0,pos1_i,pos1_j;
    for(i=1;i<=5;++i){
        for(j=1;j<=5;++j){
            si(a[i][j]);
        }
    }
    for(i=1;i<=5;++i){
        for(j=1;j<=5;++j){
            if(a[i][j]==1){
                pos1_i=i;
                pos1_j=j;
            }
        }
    }
    while(pos1_i!=3){
        if(pos1_i<3){
            pos1_i++;
        }
        if(pos1_i>3){
            pos1_i--;
        }
        step++;
    }

    while(pos1_j!=3){
        if(pos1_j<3){
            pos1_j++;
        }
        if(pos1_j>3){
            pos1_j--;
        }
        step++;
    }
    // cout<<pos1_i<<" "<<pos1_j<<endl;
    cout<<step<<endl;
    
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
