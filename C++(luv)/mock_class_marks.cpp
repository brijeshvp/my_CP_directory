#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,multiset<string> > marks_map;
    while(n--){
        string name;
        int marks;
        cin>>name>>marks;
        marks_map[-1*marks].insert(name);
    }
    for(auto & student_marks_pair : marks_map){
        auto &students = student_marks_pair.second;
        int marks = student_marks_pair.first;
        for(auto s : students){
            cout<<s<<" "<<(-1*marks)<<endl;
        }
    }
    return 0;
}