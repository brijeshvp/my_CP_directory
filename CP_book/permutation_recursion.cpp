#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> allPerms;

void generatePermutations(vector<int> &nums){
    vector<int> currentPermutation;
    vector<bool> hsh(nums.size());
    for(int i=0;i<hsh.size();++i){
        hsh[i]=0;
    }
    if(currentPermutation.size()==nums.size()){
        allPerms.push_back(currentPermutation);
        return;
    }
    for(int i=0;i<nums.size();++i){
        if(!hsh[i]){
            hsh[i]=1;
            currentPermutation.push_back(nums[i]);
            generatePermutations(nums);

            hsh[i]=0;
            currentPermutation.pop_back();
        }
    }
}

int main(){
    vector<int> nums={1,2,3};

    generatePermutations(nums);

    for(auto val1 : allPerms){
        for(auto val2 : val1){
            cout<<val2<<" ";
        }
        cout<<endl;
    }
}