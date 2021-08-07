#include<bits/stdc++.h>

using namespace std;

// Hint 1:- GCD(a,b)=GCD(a−b,b) if a>b
// Hint 2:- a−b does not change by applying any operation. However, b can be changed arbitrarily.

int main() {
    

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;

        // we maintain larger number in b
        if(a>b) swap(a,b);

        // gcd will be (larger - smaller) number
        long long gcd = (b-a);
        if(gcd==0) cout<<0<<" "<<0<<"\n";
        else{
            // method-1:-
            long long down = (a/gcd)*gcd;
            long long up = (a/gcd + 1)*gcd;

            cout<<gcd<<" "<<min(a-down,up-a)<<"\n";

            // method-2:-
            // cout<<gcd<<" "<<min(a%gcd,gcd-a%gcd)<<"\n";
        }
    }
    
    return 0;
}