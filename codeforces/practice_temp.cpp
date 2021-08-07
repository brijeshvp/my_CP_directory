// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		vector<int> a(2*n);

// 		for(int i=0;i<2*n;++i){
// 			cin>>a[i];
// 		}

// 		sort(a.begin(),a.end());

// 		vector<int> b;
// 		for(int i=0;i<n;++i){
// 			b.push_back(a[i]);
// 			b.push_back(a[2*n-1-i]);
// 		}

// 		for(int i=0;i<2*n;++i){
// 			cout<<b[i]<<" ";
// 		}
// 		cout<<endl;
// 	}
// }





// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// // 	int t;
// // 	cin>>t;
// // 	while(t--){
// // 		int x;
// // 		cin>>x;
// // 		int a=x%11;
// // 		int b=x-a*111;
// // 		if(b>=0 and b%11==0) cout<<"YES";
// // 		else cout<<"NO";
// // 		cout<<"\n";
// // 	}
// // }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	long long health=0;
// 	int count=0;
// 	priority_queue<int> q;
// 	vector<long long> v(n);
// 	for(int i=0;i<n;++i){
// 		cin>>v[i];
// 	}

// 	sort(v.begin(),v.end(),greater<int>());
// 	for(int i=0;i<n;++i){
// 		if((health+v[i])>=0){
// 			health+=v[i];
// 			count++;
// 		}
// 	}
// 	// cout<<health<<endl;
// 	cout<<count<<endl;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long health=0;
	int count=0;
	priority_queue<int> q;
	vector<long long> v(n);
	for(int i=0;i<n;++i){
		cin>>v[i];
	}

	// sort(v.begin(),v.end(),greater<int>());
	for(int i=0;i<n;++i){
		health+=v[i];
		count++;
		if(v[i]<0)
			q.push(-v[i]);
		while(health<0){
			health+=q.top();
			q.pop();
			count--;
		}
	}
	// cout<<health<<endl;
	cout<<count<<endl;
}
