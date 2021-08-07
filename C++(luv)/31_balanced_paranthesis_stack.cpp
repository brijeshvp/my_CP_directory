#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbols = {{'{',-1},{'(',-2},{'[',-3},{'}',1},{')',2},{']',3}};

string isBalanced(string s){
	stack<char> st;
	for(char brace : s){
		if(symbols[brace] < 0){
			st.push(brace);
		}else{
			if(st.empty()) return "NO";
			char top = st.top();
			st.pop();
			if(symbols[brace] + symbols[top])
				return "NO";
		}
	}

	if(st.empty()) return "YES";
	return "NO";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<isBalanced(s)<<endl;
	}
	return 0;
}