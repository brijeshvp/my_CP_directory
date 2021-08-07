#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ll long long
#define ld long double
 
#define MOD 1000000007
using namespace std;
 
#define INF 1000000000000000
#define MAX 500001
 
 
int main() {
    fastIO;
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        bool hasNeg = false;
        set<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.insert(x);
            if (x < 0) hasNeg = true;
        }
        
        if (hasNeg) {
            cout << "NO\n";
            continue;
        }
        
        bool can = false;
        while (true) {
            set<int> newSet;
            for (int i : a) newSet.insert(i);
            
            for (int i : a) {
                for (int j : a) {
                    if (i == j) continue;
                    newSet.insert(abs(i - j));
                }
            }
            
            if (newSet.size() > 300) break;
            if (newSet.size() == a.size()) {
                can = true;
                break;
            }
            for (int i : newSet) a.insert(i);
        }
        
        if (can) {
            cout << "YES\n";
            cout << a.size() << '\n';
            for (int i : a) cout << i << ' ';
            cout << "\n";
        } else cout << "NO\n";
    }
}