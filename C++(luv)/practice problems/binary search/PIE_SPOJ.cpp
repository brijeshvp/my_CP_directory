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
// const int N = 3e5, M = N;
//=======================

// vi g[N];
// int a[N];

double eps=1e-4;

int N,F;
const int R=1e4+10;
double radii[R];

// Refer problem statement on SPOJ:-
// https://www.spoj.com/problems/PIE/


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int i,j,n,m;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>N>>F;
        f++;
        int array1[n];
        for (int i=0; i<n; i++)
            scanf("%d",&array1[i]);
        long double array[n];
        sort(array1,array1+n);
        for (int i=0; i<n; i++)
            array[i]=array1[i]*array1[i]*pi;
        /*for (int i=0; i<n; i++)
            printf("%Lf ",array[i]);
        cout<<endl;*/
        long double k=bs(array);
        printf("%.4Lf\n",k);
    }
    return 0;
}






#include <bits/stdc++.h>
using namespace std;
int n,f;
long double pi=3.14159265358979323846264338327950;
int func(long double num,long double array[])
{
    int fr=0;
    if (num==0)
        return 0;
    for (int i=0; i<n; i++)
        fr+=(int)(array[i]/num);
    if (fr>=f)
        return 1;
    else
        return 0;
}
long double bs(long double array[])
{
    long double ini=0,last=array[n-1],max=0.0;
    while (last - ini >= 1e-6)
    {
        //printf("%.2Lf %.2Lf\n",ini,last);
        long double mid=(ini+last)/2;
        if (func(mid,array)==1)
        {
            /*if (max<mid)
                max=mid;*/
            ini=mid;
        }
        else
            last=mid;
    }
    return ini;
}