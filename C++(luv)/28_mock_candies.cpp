#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;++i){
            long long candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);
        }
        long long total_candy_ct=0;
        for(int i=0;i<k;++i){
            auto last_it = (--bags.end());
            total_candy_ct+=(*last_it);
            // NOTE:- erase() will erase all the elements with given value but if we pass iterator, it will delete only that value pointed by iterator. Also, all multiset operations are O(logn) time operations but here erase() is O(1) time bcoz we are passing iterator to it. 
            bags.erase(last_it);
            bags.insert(*last_it/2);
        }
        cout<<total_candy_ct<<endl;
    }
    return 0;
}