#include<bits/stdc++.h>
using namespace std;

// display content of Segment Tree
// -> TC: O(n)
void printSegmentTree(int* segment_tree,int n){
    for(int i=1;i<4*n;++i){
        cout<<segment_tree[i]<<" ";
    }
    cout<<endl;
}

// recursive function to build Segment Tree
// -> TC: O(n)
void buildSegmentTree(int* arr,int* segment_tree,int start,int end,int treeAnsNode){
    // base case:- leaf node reached -> leaf node = array elt in segment tree
    if(start == end){
        segment_tree[treeAnsNode] = arr[start];
        return;
    }

    int mid = (start + end)/2;

    buildSegmentTree(arr,segment_tree,start,mid,2*treeAnsNode);
    buildSegmentTree(arr,segment_tree,mid+1,end,2*treeAnsNode+1);

    segment_tree[treeAnsNode] = segment_tree[2*treeAnsNode] + segment_tree[2*treeAnsNode+1];
}

// recursive function to update value at particular array index and correspondingly update segment tree 
// -> TC: O(logn)
void updateSegmentTree(int *arr,int *segment_tree,int start,int end,int treeAnsNode,int index,int value){
    // base case:- when leaf node reached -> it is the elt to be updated.
    // as an when you update you put that value at that treeNode in segment tree and keep updating from bottom to top
    if(start == end){
        arr[index] = value;
        segment_tree[treeAnsNode] = value;
        return;
    }

    int mid = (start + end)/2;

    if(index > mid){
        updateSegmentTree(arr,segment_tree,mid+1,end,2*treeAnsNode+1,index,value);
    }
    else{
        updateSegmentTree(arr,segment_tree,start,mid,2*treeAnsNode,index,value);
    }

    segment_tree[treeAnsNode] = segment_tree[2*treeAnsNode] + segment_tree[2*treeAnsNode+1];
}

// recursive function to find ans of query=sum within range of L to R
// -> TC: O(logn) 
int querySegmentTree(int* segment_tree,int start,int end,int treeAnsNode,int L,int R){

    // Completely Outside of given range
    if(R < start || end < L) return 0;

    // Completely Inside of given range
    if(start >= L && end <= R) return segment_tree[treeAnsNode];

    // Partially Inside and Partially Outside of given range
    int mid = (start + end)/2;

    int leftOutput = querySegmentTree(segment_tree,start,mid,2*treeAnsNode,L,R);
    int rightOutput = querySegmentTree(segment_tree,mid+1,end,2*treeAnsNode+1,L,R);

    return leftOutput + rightOutput;
}

int main(){
    int arr[] = {1,2,3,4,5};

    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=n-1;

    // starting index of segment tree(index of 1st(root) node of segment tree) where answer of whole array is stored
    int treeAnsNode=1;

    int* segment_tree = new int[4*n];

    buildSegmentTree(arr,segment_tree,start,end,treeAnsNode);

    printSegmentTree(segment_tree,n);
    cout<<endl;

    // arr[2]=10;
    int index=2;
    int value=10;
    updateSegmentTree(arr,segment_tree,start,end,treeAnsNode,index,value);

    printSegmentTree(segment_tree,n);
    cout<<endl;

    // query=sum between index L=2 to R=4 
    int L = 2;
    int R = 4;
    int queryAns = querySegmentTree(segment_tree,start,end,treeAnsNode,L,R); 
    cout<<queryAns<<endl;
}