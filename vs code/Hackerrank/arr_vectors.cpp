//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// vector< int > v;  //vector of (ints) or 1D vector
vector< vector<int> > vec;  //vector of (vectors of(ints)) or 2D vector

int main(){
    int no_of_vec,queries,size;
    cin>>no_of_vec>>queries;
    for (int i = 0; i < no_of_vec; i++)
    {
        cin>>size;
        vector<int> v1(size); //creating a vector of int no of vectors times.
        for (int i = 0; i < size; i++)
        {
            cin>>v1[i];
        }
        vec.push_back(v1); 
        /*pushing the (1D)vector created by taking the inputs from the user to the 2D vector(vector of vector of ints).*/
    }

    /*creating two vectors of int(I and J), of size=queries, where I vector will give index of vector of vectors(2D vector) and J 
    will give index inside the vector(1D) pointed by vector of vector(2D vector).*/ 
    vector<int> I(queries); 
    vector<int> J(queries);

    //taking queries as input
    for (int i = 0; i < queries; i++)
    {
        cin>>I[i]>>J[i];
    }

    //displaying result as per queries
    for (int i = 0; i < queries; i++)
    {
        cout<<vec[ I[i] ][ J[i] ]<<endl;
    }
    
    return 0;
}