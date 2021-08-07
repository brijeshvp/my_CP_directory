#include<bits/stdc++.h>

using namespace std;


#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define REP(i,a) FOR(i,0,(int)(a)-1)
#define FORd(i,a,b) for(int i=(a);i>=(b);i--)

#define si(x)    scanf("%d",&x)
#define sl(x)    scanf("%lld",&x)
#define ss(s)    scanf("%s",s)
#define pi(x)    printf("%d\n",x)
#define pl(x)    printf("%lld\n",x)
#define ps(s)    printf("%s\n",s)

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"

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

#define set_bits __builtin_popcountll
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

typedef pair<int, int>    pii;
typedef pair<ll, ll>    pl;
typedef vector<int>        vi;
typedef vector<ll>        vl;
typedef vector<pii>        vpii;
typedef vector<pl>        vpl;
typedef vector<vi>        vvi;
typedef vector<vl>        vvl;
typedef stack<int>    sti;
typedef set<int>      seti;



#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// hash array defined globally
int hsh[5];


int main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int n;
    cin>>n;

    // WRONG APPROACH:-
    // Consider this input:- 
    // 3
    // 3 3 2
    // each taxi can carry atmost 4 students -> so if total students is exactly divisible by 4 then #taxis = total students / 4, else #taxis = total students / 4 + 1 (one extra)

    // int sum=0;
    // FOR(i,0,n-1){
    //     int x;
    //     cin>>x;
    //     sum+=x;
    // }

    // if(sum%4==0)
    //     cout<<sum/4<<"\n";
    // else
    //     cout<<(sum/4+1)<<"\n";


    // CORRECT APPROACH:-
    // take hash array of size 5 globally(bcoz we want index from 1 to 4 -> index 4 stores how many group are there with members=4 and so on)


    FOR(i,0,n-1){
        int no_of_members;
        cin>>no_of_members;

        hsh[no_of_members]++;
    }


    // NOTE:- taxi can store atmost 4 students
    // group of 4 students has to sit in a taxi individually(#4 students groups = no_of_taxis)
    int no_of_taxis=hsh[4];

    int temp = min(hsh[3],hsh[1]);    

    // also all common(same) number of 3's and 1's group has to sit together to have min no of taxis -> that is common number of 3's and 1's group are min number of both groups
    no_of_taxis+= temp;

    // we subtract min number of that groups from both of them so as to keep track remaining groups of 1's and 3's at later
    hsh[1]-=temp;
    hsh[3]-=temp;

    debug(hsh[1])
    debug(hsh[3])

    // if 3's group is left that means that there are no 1's group and 3's group are remaining, then we can't merge 3's group with 2's group bcoz taxi will be having 5 members not allowed
    // so we need seperate taxis for all the remaining 3's group
    if(hsh[3]!=0)
        no_of_taxis+=hsh[3];


    // if #2 member groups is even then we can sit 2 groups of 2 member groups in 1 taxi
    // if #2 member groups is odd then we can sit 2 groups of 2 member groups in 1 taxi and atlast for one 2 members group we need 1 more taxi which can be shared with 2 1's member group if they are left(bcoz 2 member groups can't be merged with 3's group but can be merged with 1's group, if they are left) -> this is done after this step

    no_of_taxis+= (hsh[2]/2);
    hsh[2] = hsh[2]%2;  //subtracting pairs of 2's group from its count
        

    
    
    // now at this time there may be 1 2's group left and there may be some groups of 1's.
    // so i can sit that one 2's group and 2 1's group in 1 taxi.
    // so i decrease 1's group count by 2 and increase 1 taxi.
    if(hsh[2]!=0){
        hsh[1]-=2;
        no_of_taxis++;
    }

    // if still 1's group are left then we handle it seperately.
    if(hsh[1]>0){
        if(hsh[1]%4==0)
            no_of_taxis+= (hsh[1]/4);
        else
            no_of_taxis+= (hsh[1]/4 + 1);
    }

   

    cout<<no_of_taxis<<"\n";
    return 0;
}